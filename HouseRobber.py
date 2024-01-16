https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/657dc37d0d368cfb10479771/
n=int(input())
nums=list(map(int,input().split()))
if not nums:
    print(0)
elif len(nums) == 1:
    print(nums[0])
else:
    nums[1] = max(nums[0], nums[1])
    i = 2
    while i < len(nums):
        nums[i] = max(nums[i-1], nums[i] + nums[i-2])
        i += 1
    print(nums[-1])
