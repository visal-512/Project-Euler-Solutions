# This problem is just simply utilising the choose function
# We can use numpy but I decided to derive this from scatch

def factorial(n):
    value = 1
    for i in range(1,n+1):
        value = value * i
    return value

def num_paths(m,n):
    # this is just (m+n)C(m) or (m+n)C(n)
    return int(factorial(m+n) / (factorial(m)*factorial(n)))

print(num_paths(20,20))
