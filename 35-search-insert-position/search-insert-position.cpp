class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int ans = nums.size();
        while(low<=high){
            int d = (low+high)/2;
            if(nums[d]>=target){
                ans = d;
                high = d-1;
            }
            else{
                low = d+1;
            }
        }
        return ans;       

    }
};