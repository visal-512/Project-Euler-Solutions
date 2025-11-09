from math import factorial

def fact_digit_sum(n):
    num = factorial(n)
    str_num = str(num)
    sum = 0
    
    for char in str_num:
        sum += int(char)

    return sum

print(fact_digit_sum(100))
