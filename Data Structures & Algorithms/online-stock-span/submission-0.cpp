class StockSpanner {
public:
stack<int>st1;
stack<int>st2;
    StockSpanner() {
    
    }
    
    int next(int price) {
        int span=1;
        while(!st1.empty() &&  st1.top()<=price){
            
      span +=st2.top();
      st1.pop();
      st2.pop();
        }
        st1.push(price);
        st2.push(span);
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */