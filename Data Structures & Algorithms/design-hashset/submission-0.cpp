class MyHashSet {
    vector<int>st;
public:

    MyHashSet() {
        
    }
    
    void add(int key) {
        if(contains(key)) return;
        st.push_back(key);
    }
    
    void remove(int key) {
        
        st.erase(std::remove(st.begin(),st.end(),key),st.end());

    }
    
    bool contains(int key) {
        for(int s:st){
            if(s==key){
                return true;
            }
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */