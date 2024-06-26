class Solution {
public:
    int findPoisonedDuration(vector<int>& arr, int duration) {
        
        int n=arr.size();
        int sum=duration;
        for(int i=0;i<n-1;i++){
            int count =0;
            count =arr[i]+duration;
            if(count<=arr[i+1])
            sum=sum+duration;
            else sum=sum+arr[i+1]-arr[i];
        }
        return sum;
    }
};