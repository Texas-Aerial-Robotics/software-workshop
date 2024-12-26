# 99bottles.py

# Write a program that sings the 100 bottles of [juice] song.

# If you do NOT know the song, it was inspired from this https://www.99-bottles-of-beer.net/lyrics.html

initial_juiceboxes = 99
grammar = "bottles"
for i in range(initial_juiceboxes):
    # Fill it out
    print(f"\n{initial_juiceboxes-i} {grammar} of juice on the wall, {initial_juiceboxes-i} {grammar} of juice.")
    
    if initial_juiceboxes-i <= 2:
        grammar = "bottle"

    if (initial_juiceboxes-i) > 1:
        print(f"Take one down and pass it around, {initial_juiceboxes-i - 1} {grammar} of juice on the wall.")
    else: 
        print("Take one down and pass it around, no more bottles of juice on the wall.")


print("\nNo more bottles of juice on the wall, no more bottles of juice.")
print(f"Go to the store and buy some more, {initial_juiceboxes} bottles of juice on the wall.\n")
