class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        for(int j=1;j<nums.size();j++)
        {
            if(nums[count]!=nums[j])
            {
                count++;
                nums[count]=nums[j];
            }
        }

        return count+1;
    }
};
