class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum1=0;
        int sum2=0;
       for(int i=0;i<s.length();i++){
           sum1+=s[i];
       }
       for(int i=0;i<t.length();i++){
           sum2+=t[i];
       }
       return sum2-sum1;
    }
};