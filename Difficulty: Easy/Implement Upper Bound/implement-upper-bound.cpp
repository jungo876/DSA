class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        int low = 0;
        int high = arr.size()-1;
        int ans = arr.size();
        while(low<=high){
            int d = (low+high)/2;
            if(arr[d]>target){
                ans = d;
                high = d-1;
            }
            else{
                low = d+1;
            }
        }
        return ans;
        // code here
        
    }
};
