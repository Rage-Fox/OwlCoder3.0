https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/657d5f600d368cfb10479460/
s=input()
k=int(input())
t=int(input())
n=len(s)
c=0
for i in range(n-k):
    if t==len(set(s[i:i+k])):
        c+=1
print(c)
