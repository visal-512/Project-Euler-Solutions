def multiples_of_3_5(limit):
    total = 0
    for i in range(1, limit):
        if i % 3 == 0:
            total += i
        elif i % 5 == 0:
            total += i
        else: continue
    print(total)

multiples_of_3_5(1000)