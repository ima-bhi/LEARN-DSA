class Solution {
    public:
      int largest(vector<int> &arr) {
          // code here
          int n=arr.size()-1;
          int maxm=arr[0];
          while(n>0){
              if(arr[n]>maxm){
                  maxm=arr[n];
              }
              n--;
          }
          return maxm;
      }
  };


  // iterate over array and store maxm elment value