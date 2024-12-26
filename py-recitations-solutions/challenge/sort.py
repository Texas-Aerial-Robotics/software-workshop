# sort.py

# packages
import random

# https://www.geeksforgeeks.org/generating-random-number-list-in-python/

def sortdecreasing(l:list)->list:
    # Write a program to sort a long list of random integers in descending order
    d = []
    n = len(l)

    count = 0

    while count < n:
        maxima = l[0] # assuming first element is the greatest in the list
        for i,v in enumerate(l):
            if v>maxima:
                maxima = v
                maxindex = i
        
        if maxima == l[0]:
            maxindex = 0

        l.pop(maxindex)
        d.append(maxima)
        count+=1

    return d

# sorting in increasing order relies the same framework, just find the miniuma instead

if __name__ == "__main__":

    # Generate a random list of integers (OR ask input from user)
    k = 10

    # Random
    # u = [random.randrange(-10,10) for i in range(k)]

    # OR

    # User Input
    u = []
    while True:
        s = input("Input a number (integer, no decimals) or put 'stop' to finish your list of numbers: ")
        if len(u) < k and s == "stop":
            print(f"\nC'mon gang I need at least {k} numbers!")
        elif s !="stop":
            u.append(int(s))
        else:
            break

    print(f"Original List : {u}")

    # Sort the list in decreasing order
    d = sortdecreasing(u)

    # Output original list and sorted list to user 

    # Descending Order
    print(f"Sorted Descending : {d}")

    # Ascending Order (reverse the list)
    k = len(d)
    a = []
    for i in range(1,k+1):
        a.append(d[k-i])

    print(f"Sorted Ascending : {a}")


    