class Solution {
public:
    int findmax(vector<int> &v){
        int max_el = 0;
        for(int i=0;i<v.size();i++){
            max_el = max(v[i],max_el);
        }
        return max_el;
    }
    long long calculateTotalhr(vector<int> &v,int mid){
        long long totalhr=0;
        for(int i=0;i<v.size();i++){
            totalhr+=(v[i] + mid - 1) / mid;
        }
        return totalhr;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = findmax(piles);
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