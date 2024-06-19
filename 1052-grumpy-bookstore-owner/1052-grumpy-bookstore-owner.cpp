class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        
        int n=customers.size();
        // int m=grumpy.size();
        int preloss=0;
        for(int i=0;i<minutes;i++){
            if(grumpy[i]==1)
            preloss+=customers[i];
        }
       int  maxloss=preloss;
       int maxIdx=0;
       int i=1;
       int j=minutes;
       

       while(j<n){
        int currloss=preloss;
        if(grumpy[j]==1) currloss+=customers[j];
        if(grumpy[i-1]==1) currloss-=customers[i-1];
        if(maxloss<currloss){ 
        maxloss=currloss;
        maxIdx=i;
        }
         preloss=currloss;
        i++;
        j++; 
       }
       for(int i=maxIdx;i<maxIdx+minutes;i++){
        grumpy[i]=0;
       }
       int ans=0;
       for(int i=0;i<n;i++){
        if(grumpy[i]==0)
        ans+=customers[i];
       }

       return ans;
        
    }
};