class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    
    sort(a.begin(),a.end());
    long long int mini=INT_MAX;
    
    long long int l=0,r=m-1;
    for(int i=1;i<=n-m+1;i++)  
    {
        mini=min(mini,a[r]-a[l]);
        l++;
        r++;
    }
    
    return mini;
    
    }
    
};
