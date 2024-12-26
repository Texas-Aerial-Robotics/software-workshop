# fibonacci.py


def fibonacci(n:int)->list:
    # Write a program to get Fibonnacci numbers (up to the nth number in the sequence)
    # Store these numbers in a list
    # https://en.wikipedia.org/wiki/Fibonacci_sequence
    f = [0, 1] # initialize list with first two Fibonacci numbers
    for i in range(0,n):
        f0 = f[i]
        f1 = f[i+1]
        f.append(f0+f1)
    return f


if __name__ == "__main__":
    k = 20
    n = k- 2
    # Output the result to the user
    fibnums = fibonacci(n)

    print(f"Fibonacci Numbers up to the {k}th element in the sequence : \n{fibnums}")
    # Also Output : What is the 10th Fibonnacci number? (how do you index in Python)
    print(f"The tenth Fibonacci Number is {fibnums[9]}")