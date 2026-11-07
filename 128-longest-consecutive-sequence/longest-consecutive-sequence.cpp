class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        set<int> sett;
        for(int i = 0;i<nums.size();i++){
            sett.insert(nums[i]);
        }
        int longest = 1;
        for(auto it:sett){
            if(sett.find(it-1)==sett.end()){
                int count = 1;
                int x = it;
                while(sett.find(x+1)!=sett.end()){
                    x = x+1;
                    count++;   
                }
                longest = max(longest,count);

            }
        }
        return longest;
    }
};