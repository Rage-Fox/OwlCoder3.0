https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/657d601f0d368cfb10479468/
s=input()
k=int(input())
n=len(s)
c=0
for i in range(n-k):
    if len(list(s[i:i+k]))==len(set(s[i:i+k])):
        c+=1
print(c)
