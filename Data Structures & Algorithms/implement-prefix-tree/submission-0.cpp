class PrefixTree {
public:
    PrefixTree* child[26];
    bool isEndOfWord = false;
    
    PrefixTree() {
        isEndOfWord = false;
        for(int i = 0; i < 26; i++){
            child[i] = nullptr;
        }
    }
    
    void insert(string word) {
        PrefixTree* curr = this;
        for(int i = 0; i < word.size(); i++){
            int idx = word[i] - 'a';
            // Fixed typo: changed curr->word[idx] to curr->child[idx]
            if(curr->child[idx] == nullptr){
                curr->child[idx] = new PrefixTree();
            }
            curr = curr->child[idx];
        }
        curr->isEndOfWord = true;
    }
    
    bool search(string word) {
        PrefixTree* curr = this;
        for(int i = 0; i < word.size(); i++){
            int idx = word[i] - 'a';
            if(curr->child[idx] == nullptr){
                return false;
            }
            curr = curr->child[idx];
        }
        return curr->isEndOfWord;
    }
    
    bool startsWith(string prefix) {
        PrefixTree* curr = this;
        for(int i = 0; i < prefix.size(); i++){
            int idx = prefix[i] - 'a';
            if(curr->child[idx] == nullptr){
                return false;
            }
            curr = curr->child[idx];
        }
        return true;
    }
};