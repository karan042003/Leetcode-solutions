class Solution {
public:
int dp[1001][1001];
    int solve(vector<vector<int>>& pairs,int i,int p)
    {   
        if(i==pairs.size())return 0;
        if(p!=-1 && dp[i][p]!=-1) return dp[i][p];
        int take=0;
        if(p==-1||pairs[p][1]<pairs[i][0])
        {
            take=1+solve(pairs,i+1,i);
        }
        int nottake=solve(pairs,i+1,p);
        if(p!=-1) dp[i][p]=max(take,nottake);
        return max(take,nottake);
    }
    int findLongestChain(vector<vector<int>>& pairs) 
    {   
        memset(dp,-1,sizeof(dp));
        sort(begin(pairs),end(pairs));
        return solve(pairs,0,-1);
    }
    
};