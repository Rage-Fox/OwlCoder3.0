n,x,y=map(int,input().split())
t=x^y
s=bin(t).count('1')
if s%2==0:
    print(s//2)
else:
    print(-1)
