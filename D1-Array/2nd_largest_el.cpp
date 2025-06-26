int getSecondLargest(vector<int> &arr) {
    // code here
    int n=arr.size()-1;
    int maxm=arr[0],smaxm=-1;
    while(n>0){
        if(arr[n]>maxm){
            smaxm=maxm;
            maxm=arr[n];
        }else if(arr[n]>smaxm && arr[n]<maxm){
            smaxm=arr[n];
        }
        n--;
    }
    return smaxm;
}

//iterate over array and compare el value with maxm value and arr[n] value to get smaxm value;