class Solution {
public:
    vector <string> result;
    vector<string> generateParenthesis(int n) 
    {
        int open=0,close=0;
     string curr="";
     solve(curr,n,open,close);
     return result;
    }
    // bool isvalid(string str)
    // {
    //     int count=0;
    //     for(char c:str)
    //     {
    //         if(c=='(') count++;
    //         else    count--;
    //         if(count<0) return false;
    //     }
    //     return count==0;
    // }
    void solve(string &curr,int n,int open,int close)
    {
            if(curr.length()==2*n)
            {
                // if(isvalid(curr))
                    result.push_back(curr);
                    return;
            }
            if(open<n){
            curr.push_back('(');
            solve(curr,n,open+1,close);
            curr.pop_back();}
            if(close<open){
            curr.push_back(')');
            solve(curr,n,open,close+1);
            curr.pop_back();
            }   
    }


};