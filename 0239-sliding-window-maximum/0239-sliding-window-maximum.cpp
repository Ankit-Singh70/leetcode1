class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if (k == 1)
            return nums;
        deque<int> q;
        vector<int> ans;
        int j;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            while (q.size() > 0 && nums[q.back()] < nums[i]) {
                q.pop_back();
            }
            q.push_back(i);
           j=i-k+1;
        //    if(q.front()<j) q.pop_front(); //sometimes may be by this code will no passs all test cases then we use below given while.
            while(q.front()<j) q.pop_front();
            if (i >= k - 1)
                ans.push_back(nums[q.front()]);
        }
        return ans;
    }
};
