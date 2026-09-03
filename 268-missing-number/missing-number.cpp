class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s;
        int n = nums.size();
        s = (n*(n+1))/2;
        int sums = 0;
        for(int i =0;i<n;i++){
            sums+=nums[i];
        }
        int res = s-sums;
        return res;
    }
};