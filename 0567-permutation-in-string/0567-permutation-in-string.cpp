class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        if(n>m) return false;
        sort(s1.begin(),s1.end());
        string str="";
        for(int i=0;i<m;i++){
           str=s2.substr(i,n);
           sort(str.begin(),str.end());
            if(s1==str) return true;

        }
        return false;
    }
};

