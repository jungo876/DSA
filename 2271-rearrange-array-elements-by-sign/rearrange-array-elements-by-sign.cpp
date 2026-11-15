class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> arr(nums.size());
        int pos = -2;
        int neg = -1;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>0){
                pos=pos+2;
                arr[pos] = nums[i];
            }
            else{
                neg=neg+2;
                arr[neg]=nums[i];
            }
        }
        return arr;
    }
};