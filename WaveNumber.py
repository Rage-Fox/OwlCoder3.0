https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/6576d71024635ce34ca5b67e/
s=list(input())
f=0
if s[0]>s[1]:
    f=1
else:
    f=0
for i in range(len(s)-1):
    if s[i]>s[i+1] and f==1:
        f=0
    elif s[i]<s[i+1] and f==0:
        f=1
    else:
        print("Not a Wave Number")
        exit()
print("Wave Number")
