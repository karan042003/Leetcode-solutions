class Solution {
public:
int solve(vector<int>& nums,int i,vector<int>&dp)
    {
        if(i>=nums.size()-1) return 0;
        if(dp[i]!=-1) return dp[i];
        long ans=INT_MAX;
        for(int j=1;j<=nums[i];j++)
        {
         if(i+j<nums.size())
         {
            long temp=solve(nums,i+j,dp);
                ans=min(ans,1+temp);
         }   
        }
        return dp[i]=ans;
    }
    int jump(vector<int>& nums) 
    {
        vector<int> dp(nums.size(),-1);
        return solve(nums,0,dp);
    }
    
};