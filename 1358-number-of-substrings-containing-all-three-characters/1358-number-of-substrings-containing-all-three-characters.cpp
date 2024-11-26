class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.length();
        int lastseen[]={-1,-1,-1}; int count=0;
        for(int i=0;i<n;i++){
            lastseen[s[i]-'a']=i;
            if(lastseen[0]!=-1 && lastseen[1]!=-1 && lastseen[2]!=-1){
                 count=count+(1+min(lastseen[0],min(lastseen[1],lastseen[2])));
            }
        }
        return count;
    }
};