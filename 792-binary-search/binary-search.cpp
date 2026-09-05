class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lower = 0;
        int higher = nums.size()-1;
        while(lower<=higher){
            int d = (lower+higher)/2;
            if(nums[d]==target)return d;
            else if(target<nums[d]){
                higher = d-1;
            }
            else{
                lower = d+1;
            }
        }
        return -1;
    }
};