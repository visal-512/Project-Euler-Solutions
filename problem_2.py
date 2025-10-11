def sum_of_even_fib(limit):
    x, y, z = 1, 1, 0
    sum = 0
    while z < limit:
        z = (x+y)         
        if z%2 == 0:
            sum += z
        x = y
        y = z
    return sum

print(sum_of_even_fib(4000000))
