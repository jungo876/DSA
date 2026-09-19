class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int low = 0;
        int high = arr.size()-1;
        int ans = INT_MAX;
        int index= -1;
        while(low<=high){
            int d = (low+high)/2;
            // if(arr[low]<=arr[high]){
            //     ans = min(ans,arr[low]);
            //     index = low;
            //     break;
            // }
            if(arr[low]<=arr[d]){
                if(arr[low]<ans){
                    index = low;
                    ans = arr[low];
                }
                low = d+1;
            }
            else{
                if(arr[d]<ans){
                    index = d;
                    ans = arr[d];
                }
                high = d-1;
            }
        }
        return index;
        
    }
};
