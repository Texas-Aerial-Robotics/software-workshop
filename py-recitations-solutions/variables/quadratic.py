import math as m
import cmath as cm

def quadraticformula(a: float, b: float, c: float)->list:
    # Create a function for the quadratic formula
    d=b**2-4*a*c
    
    if d >= 0:
        root1 = 0.5*(-b+m.sqrt(d))/a
        root2 = 0.5*(-b-m.sqrt(d))/a
    elif d < 0: 
        root1 = 0.5*(-b+cm.sqrt(d))/a
        root2 = 0.5*(-b-cm.sqrt(d))/a

    roots = [root1,root2]
    return roots

if __name__ == "__main__":

    print("Finding the roots of the quadratic polynomial ax^2 + bx + c")

    # Ask the user for inputs a, b, and c.
    a,b,c = map(float,input("Enter numerical inputs for a, b, and c (a<SPACE>b<SPACE>c<ENTER>): \n").split())

    # Locate the two roots using the quadratic formula.
    roots = quadraticformula(a,b,c)

    # Output the result to the user.
    if roots[0] != roots[1]:
        print(f"Roots of the quadratic {a}x^2 + {b}x + {c}: {roots}")
    else:
        print(f"The single real root of the quadratic {a}x^2 + {b}x + {c}: {roots[0]}")