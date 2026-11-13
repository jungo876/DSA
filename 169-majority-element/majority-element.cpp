class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        n =n/2;
        unordered_map<int,int>mpp;
        for(int i =0;i<nums.size();i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]]>n){
                return nums[i];
            }                
        }
        
        return{};
    }
};