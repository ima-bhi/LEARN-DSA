class Solution {
    // https://leetcode.com/problems/find-the-duplicate-number/solutions/6097957/video-floyd-s-tortoise-and-hare-algorithm-and-prove-it-with-simple-calculation/
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];

        } while (slow != fast);
        fast = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};