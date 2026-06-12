class MyQueue {
 stack<int>st1;
 stack<int>st2;
 int size;

public:
    MyQueue() {
        
    }
    
    void push(int x) {
       
        st1.push(x);
    }
    
    int pop() {
        while(!st1.empty()){
            int x=st1.top();
            st2.push(x);
            st1.pop();
        }
        int b=st2.top();
        st2.pop();
        while(!st2.empty()){
            int y=st2.top();
            st1.push(y);
            st2.pop();
        }
        return b;
    }
    
    int peek() {
         while(!st1.empty()){
            int x=st1.top();
            st2.push(x);
            st1.pop();
        }
         int a=st2.top();
        while(!st2.empty()){
            int y=st2.top();
            st1.push(y);
            st2.pop();
        }
        return a;
    }
    
    bool empty() {
        return st1.empty()&& st2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */