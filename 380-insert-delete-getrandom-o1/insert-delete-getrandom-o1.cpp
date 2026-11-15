class RandomizedSet {
public:
    vector<int> v;
    unordered_map<int,int> mp;

    RandomizedSet() {
        
    }
    
    bool insert(int val) 
    {
        if(mp[val]==0) 
        {
            mp[val]++;
            v.push_back(val);
            return true;
        }
        return false;

    }
    
    bool remove(int val) 
    {
        
        auto it=find(v.begin(),v.end(),val);
        if(it!=v.end())
           {
             v.erase(it);
             mp[val]--;
             return true;
           }
           return false;       
    }
    
    int getRandom() {
        return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */