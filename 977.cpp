// 977. Squares of a Sorted Array

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        
        int i = 0, j = n - 1;
        int pos = n - 1;
    
        while(i <= j) {
            if(abs(nums[i]) >= abs(nums[j])) {
                result[pos--] = nums[i] * nums[i];
                ++i;
            } else {
                result[pos--] = nums[j] * nums[j];
                --j;
            }
        }
    
        return result;
    }
};


// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Explanation: After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100].