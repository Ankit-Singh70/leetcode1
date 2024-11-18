class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        if(k==0) return vector<int>(n,0);
        vector<int>prefix(2*n);
        prefix[0]=code[0];
        for(int i=1;i<2*n;i++){
            prefix[i]=prefix[i-1]+code[i%n];
        }
        vector<int>result(n);
       if(k>0){
        for(int i=0;i<n;i++){
          result[i]=prefix[i+k]-prefix[i];
        }
       }
        else{
            for(int i=n;i<2*n;i++){
          result[i-n]=prefix[i-1]-prefix[i-abs(k)-1];
        }
        }
       
       return result;;
    }
};