class WordDictionary {
public:
bool isEndOfWord=false;
WordDictionary* child[26];
    WordDictionary() {
        for(int i=0;i<26;i++){
            child[i]=nullptr;
        }
    }
    
    void addWord(string word) {
       WordDictionary* curr=this;
       for(int i=0;i<word.size();i++){
        int idx=word[i]-'a';
        if(curr->child[idx]==nullptr){
            curr->child[idx]=new WordDictionary();
        }
        curr=curr->child[idx];
       }
       curr->isEndOfWord=true;
    }

    bool dfs(int stringIdx,string& word,WordDictionary* curr){
        if(stringIdx==word.size()){
            return curr->isEndOfWord;
        }
        
       char c=word[stringIdx];
       if(c=='.'){
        for(int i=0;i<26;i++){
            if(curr->child[i]!=nullptr){
                if(dfs(stringIdx+1,word,curr->child[i])){
                    return true;
                }
            }
        }return false;
       }else{
        int idx=c-'a';
        if(curr->child[idx]==nullptr){
            return false;
        }
        return dfs(stringIdx+1,word,curr->child[idx]);
       }
    }
    
    bool search(string word) {
        
        return dfs(0,word,this);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */