def palindrome_of(n):
    number = str(n)
    palindromic_n = number[::-1] # reverses the number in string form
    return int(palindromic_n)

def three_digit_multiplication():
    max = 0
    for i in range(100, 1000):
        for j in range(100, 1000):
            num = i * j # goes through every 3 digit by 3 digit multiplication
            if palindrome_of(num) == num:
                if num > max:
                    max = num # finds the largest value which is palindromic
                else: continue
            else: continue
    return(max)

print(three_digit_multiplication())
