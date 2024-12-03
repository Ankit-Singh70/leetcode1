class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
          string ans;
          int i=0;
          int j=0;
          while(i<s.length()){
            if(j<spaces.size() && i==spaces[j]){
               ans.push_back(' ');
               j++;
            } 
            ans.push_back(s[i]);
            i++;

          }
          return ans;
    }
};