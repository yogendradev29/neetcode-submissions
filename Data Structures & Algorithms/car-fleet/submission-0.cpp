class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int ans=0;
        int n=position.size();
        stack<double>st;
        vector<pair<int,int>>cars(n);
        for(int i=0;i<n;i++){
            cars[i]={position[i],speed[i]};
        }
        sort(cars.begin(),cars.end(),[](const pair<int,int>&a,const pair<int,int>&b){
            return a.first>b.first;
        });
        for(int i=0;i<n;i++){
            double time=(double)(target-cars[i].first)/cars[i].second;
            if(!st.empty() && time<=st.top()){
                continue;
            }else{
                st.push(time);
            }
        }
        return st.size();
    }
};
