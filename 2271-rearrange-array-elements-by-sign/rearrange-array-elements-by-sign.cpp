class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        vector<int> arr(nums.size());
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        for(int i = 0;i<nums.size()/2;i++){
            arr[i*2]=pos[i];
            arr[i*2+1]=neg[i];
        }
        return arr;

    }
};