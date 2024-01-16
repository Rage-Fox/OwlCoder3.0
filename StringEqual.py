https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/6577226b24635ce34ca5b9f4/
from collections import Counter
def fun(word1,word2):
    return sorted(Counter(word1).values())==sorted(Counter(word2).values()) and set(list(word1))==set(list(word2))
s=input()
t=input()
print(1 if fun(s,t) else 0)
