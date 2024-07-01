class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
    int n=arr.size();
        if(n<3) return false;
        for(int i=0;i<=n-3;i++){
            int ans=0;
            int idx=i;
            for(int j=i;j<i+3;j++){
            if(arr[j]%2!=0)  ans++;
            }
            if(ans==3) {
          return true;
          break;
            }
        }  
        return false;  
    }
};