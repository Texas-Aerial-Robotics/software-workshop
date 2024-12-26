# coinflip.py

# packages
import random

# Useful Source: https://www.geeksforgeeks.org/random-numbers-in-python/

# Use the random python package to output an integer with value either 0 or 1.
out = random.randint(0,1)

# With an if/else statement, return the heads/tails result to the user.
if out == 0:
    print("Tails")
else:
    print("Heads")



