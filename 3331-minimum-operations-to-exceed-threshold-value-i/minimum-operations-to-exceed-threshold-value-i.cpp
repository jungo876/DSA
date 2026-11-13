class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i = 0;
        int sum = 0;
        while(nums[i]<k){
            i++;
            sum++;
        }
        return sum;
        
    }
};