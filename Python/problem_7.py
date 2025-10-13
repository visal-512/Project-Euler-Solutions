def is_prime(n):
    if n <= 1:
        return False
    else:
        for i in range(2, int(n**0.5)+1):
            if n % i == 0:
                return False
        return True

def find_prime(n):
    prime_list = []
    for i in range(1, 125000+1):
        if is_prime(i):
            prime_list.append(i)
        else: continue
    return prime_list[n]

print(find_prime(10000))
