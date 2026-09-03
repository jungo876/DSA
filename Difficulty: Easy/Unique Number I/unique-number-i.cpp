class Solution {
  public:
    int findUnique(vector<int> &arr) {
        // GFG
        //Brutef(better)
        // int maxim=arr[0];
        // for(int i =0;i<arr.size();i++){
        //     maxim = max(maxim,arr[i]);
        // }
        // int hash[maxim+1] = {0};
        // for(int i = 0;i<arr.size();i++){
        //     hash[arr[i]]+=1;
        // }
        // for(int i=0;i<arr.size();i++){
        //     if(hash[arr[i]]==1)return arr[i];
        // }
        map<long long,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto it:mp){
            if(it.second == 1){
                return it.first;
            }
        }
    }
};