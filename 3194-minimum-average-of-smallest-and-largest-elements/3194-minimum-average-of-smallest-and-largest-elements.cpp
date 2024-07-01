class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<double>ans;
        int i=0;
        int j=n-1;
        while(i<j){
            ans.push_back((nums[i]+nums[j])/2.0);
            i++;
            j--;
        }
        double min=DBL_MAX;
        for(int i=0;i<ans.size();i++){
            if(ans[i]<min) min=ans[i];
        }
        return min;
        
    }
};


