https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/657708d324635ce34ca5b90b/
n=int(input())
l=sorted(list(map(int,input().split())))
c=0
for i in range(1,n):
    if l[i]<=l[i-1]:
        c+=l[i-1]-l[i]+1
        l[i]=l[i-1]+1
print(c)
