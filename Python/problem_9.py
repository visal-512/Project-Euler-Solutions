from math import sqrt

def is_pyth_triple(a,b):
    if sqrt(a**2 + b**2) == int(sqrt(a**2 + b**2)):
        return True
    else: return False

def triple_sum_to_(n):
    for i in range(1, n):
        for j in range(i+1, n):
            if is_pyth_triple(i,j):
                sum = i + j + sqrt(i**2 + j**2)
                if sum == n:
                    return int(i*j*sqrt(i**2 + j**2))
                else: continue
            else: continue
        
print(triple_sum_to_(1000))
