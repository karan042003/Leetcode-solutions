class Solution {
public:
   
    int solve(vector<int>& nums,int i,int dp[],int n)
    {
        if(i>n) return 0;
        if(dp[i]!=-1) return dp[i];
        int take=nums[i]+solve(nums,i+2,dp,n);
        int nottake=solve(nums,i+1,dp,n);
        return dp[i]=max(take,nottake);
    }
     int rob(vector<int>& nums) 
    {
        int n=nums.size();
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
        int dp[n+1];
        memset(dp,-1,sizeof(dp));
        int take0=solve(nums,0,dp,n-2);
        memset(dp,-1,sizeof(dp));
        int take1=solve(nums,1,dp,n-1); 
        return max(take0,take1);
    }
   
};