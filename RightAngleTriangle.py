https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/6578747053f92e82bb987424/
for _ in range(int(input())):
    n=int(input())
    n*=n
    ans=0
    for i in range(1,int(n**0.5)+1):
        if n%i==0:
            if n//i!=i:
                if i&1 == (n//i) & 1:
                    ans+=1
    print(ans)
