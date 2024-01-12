https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/6576db4d24635ce34ca5b6d7/
Explanation-> https://www.geeksforgeeks.org/problems/ways-to-tile-a-floor5836/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article
a=1
b=2
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
    print(c)
