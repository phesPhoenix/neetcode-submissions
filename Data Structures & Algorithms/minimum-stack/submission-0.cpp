class MinStack {
public:
    std::vector<int> theStack;
    std::vector<int> minStack;
    MinStack() {
        
    }
    
    void push(int val) {
        theStack.push_back(val);
        if (minStack.empty() || val <= minStack.back()){
            minStack.push_back(val);
        }
        else minStack.push_back(minStack.back());
    }
    
    void pop() {
        theStack.pop_back();
        minStack.pop_back();
    }
    
    int top() {
        return theStack.back(); 
    }
    
    int getMin() {
        return minStack.back();
    }
};
