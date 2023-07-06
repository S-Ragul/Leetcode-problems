class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j =0;
        for (int i : nums)
            if(j < 2 || i > nums[j-2])
            nums[j++]=i;
        return j;

        
    }
};
