https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/654b66b9f87ca5a69d5a684a/
for _ in range(int(input())):
    x,y=map(int,input().split())
    if x<y:
        x,y=y,x
    if x>2*y:
        print("NO")
    elif (x+y)%3==0:
        print("YES")
    else:
        print("NO")
