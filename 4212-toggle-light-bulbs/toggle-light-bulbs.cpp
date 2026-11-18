class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) 
    {
     vector<int> res;
     for(auto bulb:bulbs)
     {
        auto it=find(res.begin(),res.end(),bulb);
        if(it!=res.end())
        {
            res.erase(it);
        }
         else res.push_back(bulb);
     }
     sort(res.begin(),res.end());
     return res;   
    }
};