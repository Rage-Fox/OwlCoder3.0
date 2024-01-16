https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/6595025f0f92e45f5184d69f/
Explanation-> https://www.geeksforgeeks.org/given-a-sequence-of-words-print-all-anagrams-together/
def createDuplicateArray(l,n):
    a=[]
    for i,w in enumerate(l):
        a.append([w,i])
    return a
def printAnagramsTogether(l,n):
    a=createDuplicateArray(l,n)
    for i in range(n):
        a[i]=["".join(sorted(list(a[i][0]))),a[i][1]]
    a.sort()
    d={}
    for i in a:
        if i[0] not in d:
            d[i[0]]=[i[1]]
        else:
            d[i[0]].append(i[1])
    d = dict(sorted(d.items(), key=lambda x:len(x[1])))
    for i in d:
        print(*([l[j] for j in d[i]]))
n=int(input())
l=list(map(str,input().split()))
printAnagramsTogether(l,n)
