https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/6576d86224635ce34ca5b697/
Explanation-> https://www.geeksforgeeks.org/count-trailing-zeroes-factorial-number/
# Trailing 0s in n! = Count of 5s in prime factors of n! = floor(n/5) + floor(n/25) + floor(n/125) + ….
n=int(input())
if n<0:
    print(-1)
elif n<=4:
    print(0)
else:
    c=0
    while n>=5:
        n//=5
        c+=n
    print(c)
