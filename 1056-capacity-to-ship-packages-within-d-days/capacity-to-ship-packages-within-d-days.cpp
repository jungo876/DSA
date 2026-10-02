class Solution {
public:
    int calculatetotaldays(vector<int>& weights,long long capacity){
        int load = 0; int days =1;
        for(int i=0;i<weights.size();i++){
            if(weights[i]+load>capacity){
                days+=1;
                load=weights[i];
            }
            else{
                load+=weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        
        long long low = *max_element(weights.begin(),weights.end());
        long long high = accumulate(weights.begin(),weights.end(),0LL);
        long long ans = 0;
        while(low<=high){
            long long mid = low+(high-low)/2;
            int daysReq = calculatetotaldays(weights,mid);
            if(daysReq<=days){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};