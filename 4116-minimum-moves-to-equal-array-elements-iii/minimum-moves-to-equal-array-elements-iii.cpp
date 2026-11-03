class Solution {
public:
    int minMoves(vector<int>& nums) 
    {
        int count;
      int maxval=*max_element(nums.begin(),nums.end());
      for (int i:nums)
      {
        count+=i;
      }   
      return nums.size()*maxval-count;
    }
};