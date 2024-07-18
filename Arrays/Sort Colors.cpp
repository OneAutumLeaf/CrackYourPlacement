class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0=0,count1=0,count2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) count0++;
            else if(nums[i]==1) count1++;
            else count2++;
        }
        int j=0;
        for(j=0;j<count0;j++)
        {
            nums[j]=0;
        }
        for(j=j;j<count0+count1;j++)
        {
            nums[j]=1;
        }
         for(j=j;j<count0+count1+count2;j++)
        {
            nums[j]=2;
        }
    }
};
