class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> arr;
        for(int i = 0;i<nums.size();i++){
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end());
        int front = 0;
        int end = arr.size()-1;
        int sum = 0;
        while(front<end){
            sum = arr[front].first+arr[end].first;
            if(sum==target){
                return{arr[front].second,arr[end].second};
            }
            else {
                if(sum<target){
                    front++;
                }
                else{
                    end--;
                }
            }
        }
        return {};
    }
};