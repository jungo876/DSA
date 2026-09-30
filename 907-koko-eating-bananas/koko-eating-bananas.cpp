class Solution {
public:
    long long calculateTotalhr(vector<int> &v,int mid){
        long long totalhr=0;
        for(int i=0;i<v.size();i++){
            totalhr+=(v[i] + mid - 1) / mid;
        }
        return totalhr;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        long long high=*max_element(piles.begin(),piles.end());
        int ans = INT_MAX;
        while(low<=high){
            int mid = low+(high-low)/2;
            long long totalhr = calculateTotalhr(piles,mid);
            if(totalhr<=h){
                ans = min(mid,ans);
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};