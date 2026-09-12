class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) 
    {
     int n=nums.size();
     vector<int> s(n);
     s.back()=nums.back();
        for(int i=n-2;i>=0;i--)
        {
            s[i]=min(nums[i],s[i+1]);
        }
        int maxi=INT_MIN;
        int ans;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,nums[i]);
            if(maxi-s[i]<=k) return i;
        }
        return-1;
    }
};