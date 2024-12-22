// Q1. Leetcode Weekly Contest 429 [ EASY ]
// Date 12 Dec, 2024

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int operations = 0;

        while(!nums.empty()){
            set<int> uniqueElements(nums.begin(), nums.end());
            if(uniqueElements.size() == nums.size()){
                break;
            }

            if(nums.size() < 3){
                nums.clear();
            } else{
                nums.erase(nums.begin(), nums.begin() + 3);
            }

            operations++;
        }
        return operations;
    }
};