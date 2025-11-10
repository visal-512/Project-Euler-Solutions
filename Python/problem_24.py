import itertools

def perm_list(n):
    digits = list("0123456789") # Convert to a list of characters
    # Generate all permutations of the digits
    perms = list(itertools.permutations(digits))
    # Convert the tuples of characters back to integers
    perm_integers = [int("".join(p)) for p in perms]
    return perm_integers[n - 1]

print(perm_list(1000000))
