class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int n=nums.size();
       int cd1=0,cd2=0,count1=0,count2=0;
       for(int num:nums){
        if(num==cd1){
            count1++;
        }
        else if(num==cd2){
            count2++;
        }
        else if(count1==0){
            cd1=num;
            count1=1;
        }
        else if(count2==0){
            cd2=num;
            count2=1;
        }else{
            count1--;
            count2--;
        }
       } 
       count1=0;
       count2=0;
       for(int num:nums){
        if(num==cd1) count1++;
        if(num==cd2) count2++;
       }
       vector<int>ans;
       if(count1>n/3) ans.push_back(cd1);
       if(count2>n/3) ans.push_back(cd2);
       return ans;
    }
};