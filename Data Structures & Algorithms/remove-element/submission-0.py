class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        n, res = len(nums), []

        for i in range(n):
            if nums[i] != val: 
                res.append(nums[i])
        
        nums[::] = res 
        return len(res)