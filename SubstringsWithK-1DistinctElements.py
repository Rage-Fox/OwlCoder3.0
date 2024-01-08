https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/657d60ac0d368cfb10479470/
s=input()
k=int(input())
n=len(s)
c=0
for i in range(n-k+1):
    if k==len(set(s[i:i+k]))+1:
        c+=1
print(c)
