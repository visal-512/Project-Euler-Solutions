def sum_of_dig(n):
    number = str(n)
    digits = (list(number))
    sum = 0

    for i in digits:
        sum += int(i)
    
    return sum

print(sum_of_dig(2**1000))
