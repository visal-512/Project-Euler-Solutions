def is_prime(n):
    if n <= 1:
        return False
    else:
        for i in range(2, int(n**0.5)+1):
            if n % i == 0:
                return False
        return True

def sum_of_primes_below(n):
    list = []
    for i in range(2, n):
        if is_prime(i):
            list.append(i)
        else: continue
    return sum(list)

print(sum_of_primes_below(2000000))
