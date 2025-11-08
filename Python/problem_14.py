def collatz_seq_len(n):
    length = 1
    while (n != 1):
        if n%2 == 0:
            n = n/2
            length += 1
        else:
            n = (3*n) + 1
            length += 1
    return length

def max_collatz_len(n):
    if n == 1:
        return n
    else:
        max = 0
        number = 0
        for x in range(2, n):
            length = collatz_seq_len(x)
            if length > max:
                max = length
                number = x
            else: continue
        return number
    
print(max_collatz_len(1000000))
