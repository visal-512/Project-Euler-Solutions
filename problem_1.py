def multiples_of_3_5(limit):
    total = 0
    for i in range(1, limit):
        if i % 3 == 0:
            total += i # add the value to the total if it is divisible by 3
        elif i % 5 == 0:
            total += i # add the value to the total if it is divible by 5 and not 3
        else: continue
    print(total)

multiples_of_3_5(1000) # print the total value found in the func
