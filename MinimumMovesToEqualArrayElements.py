https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/6593ccb05b40218bbf299cf2/
def minCost(A, n):
	cost = 0
	A.sort()
	K = A[int(n / 2)]
	for i in range(0, n):
		cost = cost + abs(A[i] - K)
	if n % 2 == 0:
		tempCost = 0
		K = A[int(n / 2) - 1]
		for i in range(0, n):
			tempCost = tempCost + abs(A[i] - K)
		cost = min(cost, tempCost)
	return cost
n=int(input())
A=list(map(int,input().split()))
print(minCost(A, n))
