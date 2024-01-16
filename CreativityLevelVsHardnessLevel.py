https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/657dcaeb1c1ea31f10f75ebb/
for _ in range(int(input())):
    n=int(input())
    c=list(map(int,input().split()))
    h=list(map(int,input().split()))
    k=int(input())
    d={}
    for i in range(n):
        if h[i] not in d:
            d[h[i]]=c[i]
        else:
            d[h[i]]=max(d[h[i]],c[i])
    if len(d)<k:
        print(-1)
        continue
    cr=[d[i] for i in d]
    cr.sort(reverse=True)
    ans=sum(cr[:k])
    print(ans)
