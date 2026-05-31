class MinStack {
public:
    MinStack() {
        
    }
    
    void push(int val) {
        memory.push_back(val);
        if (stackMin.empty())
            stackMin.push_back(val);
        else
            stackMin.push_back((val < stackMin.back()) ? val : stackMin.back());
    }
    
    void pop() {
        memory.pop_back();
        stackMin.pop_back();
    }
    
    int top() {
        return memory.back();    
    }
    
    int getMin() {
        return stackMin.back(); 
    }

    vector<int> memory;
    vector<int> stackMin;
};
