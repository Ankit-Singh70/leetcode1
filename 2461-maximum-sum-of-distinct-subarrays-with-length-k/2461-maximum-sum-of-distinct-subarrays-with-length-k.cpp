class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size();
       long long max_sum=0;
       long long window_sum=0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            window_sum+=nums[i];

            if(i>=k){
                window_sum-=nums[i-k];
                mp[nums[i-k]]--;
                if(mp[nums[i-k]]==0) mp.erase(nums[i-k]);
            }

            if(i>=k-1 && mp.size()==k){
                max_sum=max(max_sum,window_sum);
                
            }
        }
        return max_sum;
        
    }
};