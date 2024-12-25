// 191. Number of 1 Bits
// Dec 25, 2024

// Solution 1
class Solution {
public:
    int hammingWeight(uint32_t n) {
    int count = 0;
    
    while (n) {
        count += n%2;
        n = n >> 1;
    }
    return count;
    }
};

// Solution 2
class Solution {
public:
    int hammingWeight(uint32_t n) {
    int count = 0;
    
    while (n) {
        n &= (n - 1);
        count++;
    }
    
    return count;
    }
};