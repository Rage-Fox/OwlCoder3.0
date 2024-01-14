https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/657d83970d368cfb104796f2/
s=input()
r=0
st=0
n=len(s)
e=n-1
while st<e:
    if(s[st]==s[e]):
        st+=1
        e-=1
    else:
        r+=1
        st=0
        e=n-r-1
print(r)
