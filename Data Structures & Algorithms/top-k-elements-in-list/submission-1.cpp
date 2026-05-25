class Solution {
public:


int partition(vector<int>& unique, unordered_map<int,int>&freq,int low,int high){
    int pe=unique[high];
    int pf=freq[pe];
    int i=low;
    for(int j=low;j<high;j++){
        if(freq[unique[j]]>=pf){
            swap(unique[i],unique[j]);
            i++;
        }
    }
    swap(unique[i],unique[high]);
    return i;
}

void quickSelect(vector<int>& unique, unordered_map<int, int>& freq, int low, int high, int targetIdx) {
        if (low >= high) return;

        int pIdx = partition(unique, freq, low, high);

        if (pIdx == targetIdx) {
            return; 
        } else if (pIdx < targetIdx) {
            quickSelect(unique, freq, pIdx + 1, high, targetIdx);
        } else {
            quickSelect(unique, freq, low, pIdx - 1, targetIdx);
        }
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;

        for(int num:nums){
            freq[num]++;
        }
        vector<int>unique;
        for(auto& it:freq){
            unique.push_back(it.first);
        }
quickSelect(unique,freq,0,unique.size()-1,k-1);
vector<int> result(unique.begin(), unique.begin() + k);
        return result;
    }
};
