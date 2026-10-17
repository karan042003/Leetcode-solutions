class Solution {
public:
    int t[2][101][101];
    int stoneGameII(vector<int>& piles) {
        int n=piles.size();
        memset(t,-1,sizeof(t));
        return(solve(1,1,piles,0)); 
    }
    int solve(int p,int m, vector<int>& piles,int i)
    {
        int n=piles.size();
        if(i>=n) return 0;
        if(t[p][i][m]!=-1) return t[p][i][m];
        int stones=0,result=(p==1?-1:INT_MAX);
        for(int x=1;x<=min(2*m,n-i);x++)
        {
            stones+=piles[i+x-1];
            if(p==1) result=max(result,stones+solve(0,max(m,x),piles,i+x));
            else result=min(result,solve(1,max(m,x),piles,i+x));
        }
        return t[p][i][m]=result;
    }
};