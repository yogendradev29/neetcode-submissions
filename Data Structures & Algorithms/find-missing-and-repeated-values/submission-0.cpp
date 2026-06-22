class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int>seen;
        int repeated=-1;
        int missing=-1;
      int n=grid.size();
        int total=n*n;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                int num=grid[i][j];
                if(seen.count(num)){
                 repeated=num;
                }
                seen.insert(num);
                
            }
        }

        for(int x=1;x<=total;x++){
                    if(seen.count(x)==0){
                        missing=x;
                        break;
                    }
                }
        return {repeated,missing};
    }
};