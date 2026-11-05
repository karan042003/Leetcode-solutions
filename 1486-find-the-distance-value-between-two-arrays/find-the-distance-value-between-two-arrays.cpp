class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) 
    {
        int count=0;
     for(int i:arr1)
     {
       if(solve(i,arr2,d)) count++;
     }
     return count;   
    }
    bool solve(int i,vector<int>&arr,int d)
    {
         for(int j:arr)
        {
            if(abs(i-j)<=d)return 0;
        }
        return 1;
    }
};