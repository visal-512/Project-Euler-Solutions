from math import sqrt

def prime_factors(n):
    list = []
    while n % 2 == 0:
        list.append(2) # add two if the number is divisible by 2
        n = n / 2
    for i in range(3, int(sqrt(n) + 1), 2): # loops up to the int(sqrt(n)) from 3 in steps as n is now odd
        while n % i == 0:
            list.append(i) # adds the prime factor
            n = n / i
    if n > 2: # n is prime if n == 2 and not prime if n < 2
        list.append(n)
    return list

print(max(prime_factors(200))) # print the largest value in a list of numbers
