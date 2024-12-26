#oddeven.py

import random

# For Pythons "vectors" AKA lists or arrays (if you see through to using numpy),
# Write a program that displays the total sum of the even elements and the product of all the odd elements.

# Function(s) / Method(s)
def sumeven(v:list)->int:
    # Create a function to sum up the even numbers of a list/array
    s = 0
    for i in v:
        if i%2==0:
            s = i + s
    return s

def productodd(v:list)->int:
    # Create a function to multiply the odd numbers of a list/array
    p = 1
    for i in v:
        if i%2!=0:
            p = i*p
    return p

if __name__ == "__main__": 
    
    # list of integers
    vector=[]
    n=10
    for i in range(n):
        vector.append(random.randint(1,9))
    
    # vector = [2, 4, 3, 6, 5]

    # Sum of Even elements 
    se = sumeven(vector)

    # Product of Odd elements 
    po = productodd(vector)

    # Output the result to the user.
    print(f"List : {vector}\nSum of even : {se}\nProduct of odd : {po}\n")