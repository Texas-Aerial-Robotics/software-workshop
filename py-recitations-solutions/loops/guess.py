# guess.py

# packages
import random

# Useful Source: https://www.geeksforgeeks.org/random-numbers-in-python/

# Initialize a number that will serve as the "answer" to the guessing game.
# (Try to make it random!)
n = 10
answer = random.randint(0,n)

# Tell the user to guess a certain number and store their guess.
# Useful Sources: https://www.geeksforgeeks.org/taking-input-in-python/
guess =int(input(f"Guess a number (no decimals) between 0 and {n} : "))

# Write a while loop here:
while guess!=answer:
    # Tell the user the guess was wrong, and get another guess.
    guess = int(input("Try again! : "))

# Let the user know they finally won!
print(f"You got it! The number was {answer}.")