class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
            int lb = lower_bound(arr.begin(),arr.end(),target)-arr.begin();
            int ub = upper_bound(arr.begin(),arr.end(),target)-arr.begin();
            int ans = ub-lb;
            return ans;
        
    }
};
