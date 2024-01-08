https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/654b83b7f87ca5a69d5a6cff/
n=int(input())
l=list(map(int,input().split()))
k=int(input())
maxx=0
for i in range(n):
    s=0
    for j in range(i,n):
        s+=l[j]
        if s==k:
            maxx=max(maxx,j-i+1)
print(maxx)
