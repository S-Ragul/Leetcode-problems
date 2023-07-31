class Solution(object):
    def containsDuplicate(self, nums):
        co = set()
        for i in nums:
            if i in co:
                return True
            co.add(i)
        return False    
