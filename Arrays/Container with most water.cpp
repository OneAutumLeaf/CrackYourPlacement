class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int maxarea=INT_MIN;

        while(l<r)
        {
            int current=min(height[l],height[r])*(r-l);
            maxarea=max(maxarea,current);
            if(height[l]<height[r])
            {
                l++;
            }
            else{
                r--;
            }
        }
        return maxarea;
    }
};
