class Solution {
public:
    int countAsterisks(string s)
    {
        int count=0,res=0;
     for(auto c:s)
     {
        if(c=='|') count++;
        if(count%2==0 && c=='*') res++;
     }
     return res;   
    }
};