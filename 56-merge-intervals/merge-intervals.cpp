class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // sort 2d array on ascending order (default - take el[0] value)
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> merged;
        // initiate a[0] as initial value
        vector<int> prev = intervals[0];

        for (int i = 1; i < intervals.size(); i++) {
            //check over - then find the max inteval
            if (intervals[i][0] <= prev[1]) {
                // Merge overlapping intervals
                prev[1] = max(prev[1], intervals[i][1]);
            } else {
                // if not overlapped - push to the 2d array
                merged.push_back(prev);
                prev = intervals[i];
            }
        }

        merged.push_back(prev);
        return merged;
    }
};