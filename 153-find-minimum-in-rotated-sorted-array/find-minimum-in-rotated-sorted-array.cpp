class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        int ans = INT_MAX;
        while(low<=high){
            int d = (low+high)/2;
            if(nums[low]<=nums[high]){
                ans = min(ans,nums[low]);
                break;
            }
            if(nums[low]<=nums[d]){
                if(nums[low]<ans){
                    ans = nums[low];
                }
                low = d+1;
            }
            else{
                if(nums[d]<ans){
                    ans = nums[d];
                }
                high = d-1;
            }
        }
        return ans;
    }
};