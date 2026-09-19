class Solution {
public:
    int search(vector<int>& nums, int target) {
        int high = nums.size()-1;
        int low = 0;
        int ans = -1;
        while(low<=high){
            int d = (low+high)/2;
            if(target == nums[d]){
                return d;
            }
            if(nums[low]<=nums[d]){
                if(nums[low]<=target && target<=nums[d]){
                    high = d-1;
                }
                else{
                    low = d+1;
                }
            }
            else{
                if(nums[d]<=target && target<=nums[high]){
                    low=d+1;
                }
                else{
                    high = d-1;
                }
            }
        }
        return -1;
    }
};