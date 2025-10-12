def sum_of_even_fib(limit):
    x, y, z = 1, 1, 0 # assign values for the initial sequence values
    result = 0
    while z < limit: # terminates loop once final number in sequence is less than the limit
        z = (x+y)         
        if z%2 == 0:
            result += z # only adds to the result if the value is even
        x = y
        y = z
    return result

print(sum_of_even_fib(4000000))
