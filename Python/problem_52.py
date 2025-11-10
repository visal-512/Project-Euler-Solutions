def are_perm(n, m):
    return sorted(str(n)) == sorted(str(m))

i = 12587
while True:
    if (are_perm(i, 2*i) and 
        are_perm(i, 3*i) and 
        are_perm(i, 4*i) and
        are_perm(i, 5*i) and
        are_perm(i, 6*i)):

        print("Found:", i)
        break
    else:
        print(i)
        i += 1
