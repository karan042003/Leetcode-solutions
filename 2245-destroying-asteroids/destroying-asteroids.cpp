class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) 
    {
     typedef long long ll;
     ll m=mass;
     sort(asteroids.begin(),asteroids.end());
     stack<int> st;
     for(auto a:asteroids)
     {
        if(m<a) return false;
        else m+=a;
     }
     return true;
    }
};