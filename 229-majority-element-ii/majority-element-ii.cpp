class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0;
        int cnt2=0;
        int ele1=0;
        int ele2=0;
        for(int i = 0;i<nums.size();i++){
            if(cnt1==0 && nums[i]!=ele2){
                cnt1++;
                ele1=nums[i];
            }
            else if(cnt2==0 && nums[i]!=ele1){
                cnt2++;
                ele2=nums[i];
            }
            else if(nums[i]==ele1){
                cnt1++;
            }
            else if(nums[i]==ele2){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        int cnt_ele1 = 0;
        int cnt_ele2 = 0;
        for(int i =0;i<nums.size();i++){
            if(nums[i] == ele1)cnt_ele1++;
            else if(nums[i] == ele2)cnt_ele2++;
        }
        if(cnt_ele1>nums.size()/3 && cnt_ele2>nums.size()/3){
            return {ele1,ele2};
        }
        else if(cnt_ele1>nums.size()/3){
            return {ele1};
        }
        else if(cnt_ele2>nums.size()/3){
            return {ele2};
        }
        return {};
    }
};