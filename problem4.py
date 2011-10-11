# Problem 4

# A palindromic number reads the same both ways. The largest palindrome made 
# from the product of two 2-digit numbers is 9009 = 91 x 99.

# Find the largest palindrome made from the product of two 3-digit numbers.

# Solution

# Ugly brute force solution

def IsPalindrome(a) :
    s = str(a)
    return s == s[::-1]

print IsPalindrome(0)
print IsPalindrome(11)
print IsPalindrome(123321)
print IsPalindrome(123456)

max_palindrome = 0

for i in range(999,100,-1) :
    for j in range( 999,100,-1):
        p = i * j
        if IsPalindrome(p) and p > max_palindrome :
            max_palindrome = p

print 'Max Palindrome = ' + str(max_palindrome)


# END
