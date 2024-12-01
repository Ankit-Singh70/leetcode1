class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n= arr.size(); 
        unordered_map<int,int>mp;
        for(auto i:arr){
            mp[i]++;
        }
        for (auto i:mp){
            if(i.first!=0 && mp.find(i.first*2)!=mp.end()) return true;
            if(i.first==0 && mp[i.first]>1) return true;
        }
        return false;


    }
};