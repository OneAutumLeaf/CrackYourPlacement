class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            int element=abs(nums[i]);
            int seat=element-1;
            if(nums[seat]<0)
            {
                ans.push_back(element);
            }
            else{
                nums[seat]=-nums[seat];
            }
        }

        return ans;
    }
};
