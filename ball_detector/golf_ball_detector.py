import cv2
import numpy as np

cap = cv2.VideoCapture(0)

# Change window resolution here
sizex=1000 #px
sizey=int(sizex*3/4) #px

if not cap.isOpened():
    print("Error: Could not open video capture.")
    exit()

# Tune HSV/HSB color bounds
lower_green = np.array([35, 100, 100])
upper_green = np.array([85, 255, 255])

drawn_circles = []

while True:
    ret, frame = cap.read()
    
    if not ret:
        print("Error: Could not read frame.")
        break
   
    hsv_image = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
  
    mask = cv2.inRange(hsv_image, lower_green, upper_green)

    contours, _ = cv2.findContours(mask, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
    
    circles_in_frame = []

    for contour in contours:
        if cv2.contourArea(contour) > 100:  
            (x, y), radius = cv2.minEnclosingCircle(contour)
            center = (int(x), int(y))
            radius = int(radius)
          
            is_drawing = True
            for drawn in drawn_circles:
                if np.sqrt((center[0] - drawn[0])**2 + (center[1] - drawn[1])**2) < radius:
                    is_drawing = False
                    break
            
            if is_drawing:
                # Draw the circle
                cv2.circle(frame, center, radius, (255, 0, 0), 2)
                circles_in_frame.append(center)

                # Display the object's position (center) and size (radius)
                position_text = f"Pos: ({center[0]}, {center[1]}), Radius: {radius}"
                cv2.putText(frame, position_text, (center[0] - 40, center[1] - 40),
                            cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)
    
    drawn_circles = circles_in_frame


    frame = cv2.resize(frame,(sizex, sizey))
    cv2.imshow('Green Tennis Ball Detection with Pose', frame)
 
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()

