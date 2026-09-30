class Solution {
public:
    int calculatesum(vector<int>& v,int mid){
        int sum = 0;
        for(int i=0;i<v.size();i++){
            sum += (v[i] + mid - 1) / mid;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        int ans = INT_MAX;
        while(low<=high){
            int mid = low+(high-low)/2;
            int sum = calculatesum(nums,mid);
            if(sum<=threshold){
                ans = min(ans,mid);
                high=mid-1;
            }
            else{
                low =mid+1;
            }
        }
        return ans;
    }
};