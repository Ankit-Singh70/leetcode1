class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l=0, r=1;
        int max = 0;
        while (r < nums.size()) {
            if (nums[r] - nums[l] > 1) {
                l++;
            }
            else {
                if ((r - l+1) > max && (nums[r] - nums[l] == 1)) max = (r - l) + 1;
                r++;
            }
        }
        return max;   
    }
};