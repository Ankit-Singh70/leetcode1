class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int>pq(nums.begin(),nums.end());
        long score =0;
        for(int i=0;i<k;i++){
            int max=pq.top();
            pq.pop();
            score+=max;
        pq.push(ceil(max/3.0));
        }
        return score;
    }
};