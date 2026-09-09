class MinStack {
public:

stack<int> stk;
stack<int> minStk;

    MinStack() {}
    
    void push(int val) {
        stk.push(val);
        int min;
        if(minStk.empty()){
            min = val;
        }
        else{
            min = std::min(val,minStk.top());
        }
        minStk.push(min);
    }
    
    void pop() {
        stk.pop();
        minStk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return minStk.top();
    }
};
