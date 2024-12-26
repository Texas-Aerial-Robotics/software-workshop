# square.py

def getperfectsquares(n:int)->list:
    # Write a program that gets all the perfect squares between 1 and n. 
    # Store all these perfect squares in a list
    num = []

    for i in range(n):
        i = i + 1
        v = i**2

        if v > n:
            break
        elif v == n:
            num.append(v)
            break

        num.append(v)
    
    return num

if __name__ == "__main__":

    n = 1000

    # Output result to user
    psqrs = getperfectsquares(n)

    # excluding 1 and the last perfect square
    # psqrs = psqrs[1:len(psqrs)-1]

    print(f"There are {len(psqrs)} Perfect Squares between 1 and {n} :\n{psqrs}")
