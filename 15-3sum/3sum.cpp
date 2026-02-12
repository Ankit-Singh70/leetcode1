class Solution {
public:
    vector<vector<int>> result;

    void twoSum(vector<int>& nums, int target, int i, int j, int fixed) {
        while (i < j) {
            int sum = nums[i] + nums[j];

            if (sum > target) j--;
            else if (sum < target) i++;
            else {
                result.push_back({fixed, nums[i], nums[j]});

                // skip duplicates
                while (i < j && nums[i] == nums[i + 1]) i++;
                while (i < j && nums[j] == nums[j - 1]) j--;

                i++;
                j--;
            }
        }
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return {};

        sort(nums.begin(), nums.end());
        result.clear();

        for (int k = 0; k < n - 2; k++) {
            if (k > 0 && nums[k] == nums[k - 1]) continue;

            twoSum(nums, -nums[k], k + 1, n - 1, nums[k]);
        }
        return result;
    }
};
