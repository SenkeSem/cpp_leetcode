// 2570. Merge Two 2D Arrays by Summing Values

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        std::map<int, int> data;
        vector<vector<int>> result;

        for(int i = 0; i < nums1.size(); i++) {
            data[nums1[i][0]] = nums1[i][1];
        }

        for(int j = 0; j < nums2.size(); j++) {
            if(data.count(nums2[j][0])) {
                data[nums2[j][0]] += nums2[j][1];
            } else {
                data[nums2[j][0]] = nums2[j][1];
            }
        }

        for (const auto& [id, val] : data)
        result.push_back(vector<int> {id, val});

        return result;
    }
};

// Example 1:

// Input: nums1 = [[1,2],[2,3],[4,5]], nums2 = [[1,4],[3,2],[4,1]]
// Output: [[1,6],[2,3],[3,2],[4,6]]
// Explanation: The resulting array contains the following:
// - id = 1, the value of this id is 2 + 4 = 6.
// - id = 2, the value of this id is 3.
// - id = 3, the value of this id is 2.
// - id = 4, the value of this id is 5 + 1 = 6.