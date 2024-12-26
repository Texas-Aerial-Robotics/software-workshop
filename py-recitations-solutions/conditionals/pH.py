# pH.py

import random
   
# Write a program to tell whether or not a solution is basic or acidic (or neutral, what substance would that be?)
# based on a pH level.

# Research https://www.epa.gov/goldkingmine/what-ph


pH = random.randint(0,14)

if pH < 7:
    s = "Acidic"
elif pH > 7:
    s = "Basic"
else:
    s = "Neutral"

print(f"\npH Level : {pH}. This substance is {s}.\n")