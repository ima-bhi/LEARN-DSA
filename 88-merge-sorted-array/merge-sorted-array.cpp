class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // start from both end points value and fill nums1 from end
        int i = m - 1, j = n - 1, k = m + n - 1;
        while (i >= 0 and j >= 0) {
            // dexcrease num2 value
            if (nums1[i] < nums2[j]) {
                nums1[k--] = nums2[j--];
            } else {
                nums1[k--] = nums1[i--];
            }
        }
        // element in num2 available
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};