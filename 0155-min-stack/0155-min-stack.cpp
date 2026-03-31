class MinStack {
public:
    MinStack() {
    }
    
    void push(int val) {
        if(st.empty()) st.push({val, val});
        else st.push({val, std::min(val, st.top().second)});
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
private:
    std::stack<std::pair<int,int>> st;
};







