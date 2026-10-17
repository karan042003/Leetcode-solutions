class Solution {
public:
    bool stoneGame(vector<int>& piles) 
    {
        int alice=0;
        int bob=0;
        int n=piles.size()-1;
        for(int i=0;i<n;i++,n--)
        {
            if(piles[i]>=piles[n])
            {
                alice+=piles[i];
                bob+=piles[n];
            }
            else{
                bob+=piles[i];
                alice += piles[n];
            }
        }
        return(1?alice>bob:0);
    }
};