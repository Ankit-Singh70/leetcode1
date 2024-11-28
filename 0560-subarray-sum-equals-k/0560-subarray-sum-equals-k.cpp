class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int n=nums.size();
       unordered_map<int,int>freq;
       int presum=0;
       int ans=0;
       freq.insert({0,1});
       for(int i=0;i<n;i++){
           presum+=nums[i];
           if(freq.find(presum-k)!=freq.end()){
            ans+=freq[presum-k];
           }
           freq[presum]++;
       } 
       return ans;
    }
};