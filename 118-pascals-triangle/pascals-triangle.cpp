class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // way 1 - using extra space (not specific formula)
        vector<vector<int>>res;
        vector<int>prev;
        for(int i=0;i<numRows;i++){
            vector<int>arr(i+1,1);
            // iterate over numRows to insert value
            for(int j=1;j<i;j++){
                // get values from prev and insert it into the main
                arr[j]=prev[j-1]+prev[j];
            }
            prev=arr;
            res.push_back(prev);
        }
        return res;

    }
};