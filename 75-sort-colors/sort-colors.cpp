class Solution {
public:
    void sortColors(vector<int>& nums) {
        /* Dutch Flag Algo */
        int size=nums.size();
        int left=0,mid=0,right=size-1;
        while(mid<=right){
            //case 1: el is eual to 0 - increase low and mid
            // swap low with mid
            if(nums[mid]==0){
                swap(nums[left++],nums[mid++]);
            //case 2: el is equal to 1 - increase mid
            }else if(nums[mid]==1){
                mid ++;
            //case 3: el is equal to 2 -- swap mid with high
            //decrease the high
            }else{
                swap(nums[mid],nums[right--]);
            }
        }
    }
};