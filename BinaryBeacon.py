https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/6576d76124635ce34ca5b68a/
Explanation:
------------
1-> 0,1
2-> 00,01,10
3-> 000,001,010,100,101
4-> 0000,0001,0010,0100,1000,0101,1001,1010
5-> ........
============
a=2
b=3
n=int(input())
if n==1:
    print(a)
elif n==2:
    print(b)
else:
    c=0
    m=1000000007
    for i in range(3,n+1):
        c=(a%m+b%m)%m
        a=b%m
        b=c%m
    print(c%m)
