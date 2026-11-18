class MinStack {
public:
    vector<vector<int>> v;

    MinStack() {
             
    }
    int getMin() 
    {
        return v.empty()?-1:v.back()[1];
    }
    void push(int value) 
    {
       int min=getMin();
       if(v.empty()|| min>value) min=value ;
       v.push_back({value,min});//har value k saath minval store krva re he ....
    }
    
    void pop() {
    v.pop_back();        
    }
    
    int top() {
        return v.empty()?-1:v.back()[0];
    }
    
    
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */