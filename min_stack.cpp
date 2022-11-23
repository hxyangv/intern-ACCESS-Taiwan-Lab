class MinStack {
    vector<int> stack;
    vector<int> min_index;

public:
    MinStack() {
       
    }
    
    void push(int val) {
        if(min_index.empty() || val < stack[min_index.back()])
            min_index.push_back(stack.size());
        
        stack.push_back(val);
    }
    
    void pop() {
        stack.pop_back();
        
        if(min_index.back() == stack.size())
            min_index.pop_back();    
    }
    
    int top() {
        return stack.back();
    }
    
    int getMin() {
        return stack[min_index.back()];
    }
};
