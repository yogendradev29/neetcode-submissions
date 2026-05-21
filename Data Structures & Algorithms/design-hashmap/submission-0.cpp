class MyHashMap {
    private:
    int size;
    vector<vector<pair<int,int>>>hashmap;
    int hash(int key){
        return key%size;
    }
public:


    MyHashMap() {
        size=100;
        hashmap.resize(size);
    }
    


    void put(int key, int value) {
        int bucket=hash(key);
        for(auto& p:hashmap[bucket]){
            if(p.first==key){
                p.second=value;
                return;
            }
        }
        hashmap[bucket].push_back({key,value});
    }
    
    int get(int key) {
       int bucket=hash(key);
        
       for(auto& p:hashmap[bucket]){
        if(p.first==key){
            return p.second;
        }
       }
       return -1;
    }
    
    void remove(int key) {
         int bucket=hash(key);
         auto& chain=hashmap[bucket];
        
        for (auto it = chain.begin(); it != chain.end(); ++it) {
            if (it->first == key) {
                chain.erase(it); // Remove the pair from the vector
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */