// 153. Find Minimum in Rotated Sorted Array [MEDIUM]
// Date: 23 Dec, 2024

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l=0, r=n-1;
        
        while(l<=r){
            if(nums[l] <= nums[r]) return nums[l];
            int mid = l + (r-l)/2;
            if(nums[l] > nums[mid]){
                r=mid;
            } else if(nums[mid] > nums[r]) {
                l=mid+1;
            } 
        }
        return -1;
    }
};