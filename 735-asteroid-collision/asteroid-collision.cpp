class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) 
    {
     stack<int> st;
     int n=asteroids.size();
     for(int i=0;i<n;i++)
     {
        bool survive=1;
        while(survive && asteroids[i]<0 && !st.empty() && st.top()>0)
        {
            int top=st.top();
            if(top<abs(asteroids[i])) st.pop();
            else if (top==abs(asteroids[i]))
            {
                survive=0;
                st.pop();
            }
            else survive=0;
        }
        if(survive) st.push(asteroids[i]);
     }
        vector<int> v;
        while(!st.empty())
        {
            v.push_back(st.top());
            st.pop();
        } 
        reverse(v.begin(),v.end());
        return v;  
    }
};