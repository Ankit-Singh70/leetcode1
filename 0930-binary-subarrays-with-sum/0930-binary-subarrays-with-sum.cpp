class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       int n=nums.size();
       unordered_map<int,int>freq;
       int presum=0;
       int ans=0;
       freq.insert({0,1});
       for(int i=0;i<n;i++){
           presum+=nums[i];
           if(freq.find(presum-goal)!=freq.end()){
            ans+=freq[presum-goal];
           }
           freq[presum]++;
       } 
       return ans; 
    }
};