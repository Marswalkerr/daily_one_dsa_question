// 11. Container With Most Water [MEDIUM]
// Dec 24, 2024

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int area = 0;
        int res = 0;
        while(l < r){
            area = (r - l) * min(height[l], height[r]);
            res = max(res, area);

            if(height[l] < height[r]){
                l++;
            } else {
                r--;
            }
        }
        return res;
    }
};