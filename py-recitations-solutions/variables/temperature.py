# temperature.py

def farenheit2celsius(tempf: float) -> float:
    # write the conversion function from degrees farenheit to degrees celsius
    return (tempf-32)*5/9

if __name__ == "__main__":
    
    # Ask the user to input a temperature in degrees Farenheit
    # Useful Sources: https://www.geeksforgeeks.org/taking-input-in-python/
    farenheit = float(input("Enter a temperature in degrees Farenheit : "))

    # Convert to temperature to degrees Celsius using your function
    celsius = farenheit2celsius(farenheit)

    # Output result to user
    print(f"{farenheit} degrees F = {round(celsius,2)} degrees C")


