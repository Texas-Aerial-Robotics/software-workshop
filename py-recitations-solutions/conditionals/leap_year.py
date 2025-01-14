# leap_year.py

# From Google: A year is a leap year if it is divisible by four, except for
# end-of-century years. End-of-century years must be divisible by 400 to be
# leap years. For example, 2000 is a leap year, but 1900 is not. 2024,
# 2028, 2032, and 2036 are also leap years.


# Ask the user to input a year, then store the response in an integer.
# Useful Sources: https://www.geeksforgeeks.org/taking-input-in-python/
year = int(input("Input a year : "))

# Write out the logic for leap year, and tell the user whether or not their
# input was on a leap year.
end = year%10 # modulo operator : gives me the last digit of the year

if end == 0 and year%400==0:
    print(f"{year} is a leap year")
elif end!=0 and year%4==0:
    print(f"{year} is a leap year")
else:
    print(f"{year} is not a leap year")
