// 268. Missing Number [EASY]
// Dec 25, 2025

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i;
        
        sort(nums.begin(), nums.end());
        for(i = 0 ; i < nums.size() ; i++){
            if(nums[i] != i){
                return i ;
            }
        }
        return i;
    }
};