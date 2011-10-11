# Problem 3

# The prime factors of 13195 are 5, 7, 13 and 29.
# What is the largest prime factor of the number 600851475143 ?

# Solution

t = 600851475143

f, k = 0, 2

while t != 1 and t > 0 :
    while t % k == 0 :
        f = k
        t /= k
    k += 1
   
print f

# END
