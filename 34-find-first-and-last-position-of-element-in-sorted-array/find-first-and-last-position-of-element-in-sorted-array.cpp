class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int ub = upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        ub = ub-1;
        if(lb>=nums.size()||nums[lb]!=target ){
            lb = -1;
            ub = -1;
        }
        return{lb,ub};
    }
};