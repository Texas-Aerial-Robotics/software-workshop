# primes.py

def listprimes(n:int)->list:
    # Write a program to get all the prime numbers from (1 to n] ; natural numbers
    # Store these primes in a list
    q = [2] # 2 is the only even prime and the first prime number

    if n <2:
        print(f"No primes between 1 and {n}")
        return None
    elif n == 2:
        return q

    for i in range(3,n+1):
        for k in range(2,i):
            if i%k==0:
                break
            elif k == i-1:
                q.append(i)
    return q 


if __name__ == "__main__":

    n = 1000

    # Output resulting list of primes under number n along with the number of primes under this number
    ps = listprimes(n)
    if n == 2:
        print(f"Only {len(ps)} prime between 1 and {n} : \n{ps}")
    else:
        print(f"There are {len(ps)} primes between 1 and {n} : \n{ps}")