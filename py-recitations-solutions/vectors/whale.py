#whale.py

# For Pythons "vectors" AKA lists or arrays (if you see through to using numpy),

# Write a program that turns a string into "whale talk." Whale talk follows the rules below:

# ---------------------------------------------------------------- #
# 1. There are no consonants. Only vowels excluding the letter y.
# 2. The u‘s and e‘s are extra long, so we must double them.
# ---------------------------------------------------------------- #

home =  "ASE" # fill this out

string = f"I live at the {home} building"

print(f"\nOriginal String : {string}\n" )

# Hint 1: Make a list of vowels (python is case sensitive)
vowels = ['a','e','i','o','u', 'A','E','I','O','U']

# Hint 2: Look to using nested for loop and append for lists
string = "".join([2*c for c in string for i in vowels if c == i])

# Output the result to the user.
print(f'Whale Talk String : {string}\n')
