https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/658be929d36f39a4825d71c0/\
n=int(input())
l=list(map(int,input().split()))
s=sum(l)
p=int(input())
if s%p==0:
    print(0)
    exit()
minn=10000000000
for i in range(n):
    su=0
    for j in range(i,n):
        su+=l[j]
        if (s-su)%p==0:
            minn=min(minn,j-i+1)
            break
if minn!=10000000000:
    print(minn)
    exit()
print(-1)
