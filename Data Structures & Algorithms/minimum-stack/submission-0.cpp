class MinStack {
    stack<int> s;    
public:
    MinStack() {

    }
    
    void push(int val) {
        s.push(val);
    }
    
    void pop() {
        s.pop();
    }   
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        if(!s.empty())
        {
            stack<int> temp = s;
            int minimum = s.top();

            while(!temp.empty())
            {
                minimum = min(minimum,temp.top());
                temp.pop();
            }
            return minimum; 
        }
    }
};
