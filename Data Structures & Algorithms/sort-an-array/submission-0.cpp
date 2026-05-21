class Solution {
public:

void mergesort(vector<int>&arr,int left,int right){
    if(left>=right) return;
    int mid=left+(right-left)/2;
    mergesort(arr,left,mid);
    mergesort(arr,mid+1,right);
    merge(arr,left,mid,right);
}

void merge(vector<int>&arr,int left,int mid,int right){
    int i=0,j=0,k=left;
    int n1=mid-left+1;
    int n2=right-mid;
    vector<int>leftarray(n1);
    vector<int>rightarray(n2);
    for(i=0;i<n1;i++){
        leftarray[i]=arr[left+i];
    }
    for(j=0;j<n2;j++){
        rightarray[j]=arr[mid+1+j];
    }
    i=0;
    j=0;
    while(i<n1 && j<n2){
     if(leftarray[i]<rightarray[j]){
        arr[k]=leftarray[i];
        
        i++;
     }else{
        arr[k]=rightarray[j];
        j++;
        
     }
     k++;
    }
    while(i<n1){
        arr[k]=leftarray[i];
        k++;
        i++;
    }
    while(j<n2){
        arr[k]=rightarray[j];
        k++;
        j++;
    }

}

    vector<int> sortArray(vector<int>& arr) {
        mergesort(arr,0,arr.size()-1);
        return arr;
    }
};