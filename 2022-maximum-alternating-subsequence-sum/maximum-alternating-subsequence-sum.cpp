class Solution {
public:
    long long dp[100001][2];
    long long solve(vector<int>& nums,int i,int n,int sign)
    {
        if(i>=n)return 0;
        if(dp[i][sign]!=-1) return dp[i][sign];
        long long nottake=solve(nums,i+1,n,sign);
        long long val=nums[i];
        if(sign==0) val=-val;
        long long take=val+solve(nums,i+1,n,!sign) ;
        return dp[i][sign]=max(take,nottake);
    }
    
    long long maxAlternatingSum(vector<int>& nums) 
    {
     int n=nums.size();
     int i=0;
     int sign=1;
     if(n==1) return nums[0];
     if(n==2)return max(nums[0],nums[1]);
     memset(dp,-1,sizeof(dp)); 
     return solve(nums,i,n,sign);   
    }
};