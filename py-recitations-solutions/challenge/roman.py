# roman.py

# https://en.wikipedia.org/wiki/Roman_numerals

def romannumeral(n:int)->str:
    '''
    Limited to n = 3999 due to symbolic changes past this number
    '''
    #   Write a program to turn an integer into its corresponding Roman numeral
    #   representation.
    if  n > 3999 or n <= 0:
        print("Roman Numeral Representation limited to NATURAL NUMBERS under 3999.")
        return None

    r = ""

    # Roman Numerals
    M = 1000
    # D = 500
    C = 100
    # L = 50
    X = 10
    # V = 5
    I = 1

    r1000 = int((n - n%(M))/M)
    r100 = int((n%(M) - n%(C))/C)
    r10 = int((n%(C) - n%(X))/X)
    r1 = int((n%(X) - n%I)/I)

    # 1000s
    for i in range(r1000):
        r = r + "M"
    
    # Dealing with cases for each digit

    # 100s
    if r100 == 9:
        r =  r + "CM"
    elif 5 <= r100 < 9:
        r = r + "D"
        if r100 - 5 > 0:
            for i in range(r100-5):
                r = r + "C"
    elif r100 == 4:
        r =  r + "CD"
    else:
        for i in range(r100):
            r = r + "C"

    # 10s
    if r10 == 9:
        r =  r + "XC"
    elif 5 <= r10 < 9:
        r = r + "L"
        if r10 - 5 > 0:
            for i in range(r10-5):
                r = r + "X"
    elif r10 == 4:
        r =  r + "XL"
    else:
        for i in range(r10):
            r = r + "X"

    # 1s
    if r1 == 9:
        r =  r + "IX"
    elif 5 <= r1 < 9:
        r = r + "V"
        if r1 - 5 > 0:
            for i in range(r1-5):
                r = r + "I"
    elif r1 == 4:
        r =  r + "IV"
    else:
        for i in range(r1):
            r = r + "I"

    return r

if __name__ == "__main__":

    year = 2017

    # What is your birth year in roman numerals?
    # Output result to user
    if romannumeral(year) != None:
        print(f"{year} in Roman Numerals is : {romannumeral(year)}")
