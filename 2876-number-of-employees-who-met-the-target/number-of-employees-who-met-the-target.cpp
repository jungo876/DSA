class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int sum = 0;
        for(int num:hours){
            if(num>=target)sum++;
        }
        return sum;
    }
};