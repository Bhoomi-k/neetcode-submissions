class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        res = []
        for i, num in enumerate(nums):
            if num>0:
                break
            if i>0 and nums[i-1]==nums[i]:
                continue
            j = i+1
            k = len(nums)-1
            while j<k:
                currsum = num + nums[j]+ nums[k]
                if currsum<0:
                    j += 1
                elif currsum>0:
                    k -= 1
                else:
                    res.append([num, nums[j], nums[k]])
                    j = j+1
                    k = k-1
                    while(j<k and nums[j-1]==nums[j]):
                        j = j+1
                    while(j<k and nums[k]==nums[k+1]):
                        k = k-1
        return res                




