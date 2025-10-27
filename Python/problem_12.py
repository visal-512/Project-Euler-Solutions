def num_of_factors(n):
    list = [1]
    for i in range(2, n+1):
        if n % i == 0:
            list.append(i) # adds the factor to a list
        else: continue
    return len(list) # find the number of elements in the list

def tri_numbers(n, d):
    for i in range(1, n+1):
        tri_number = int(0.5 * i * (i+1))
        if num_of_factors(tri_number) > d: # checks if the triangle number has more than d factors
            return tri_number
            break
        else: continue
    
print(tri_numbers(12735, 500)) # choose n appropriately to ensure geting a quick result and also making sure we loop over enough numbers to get to our value
