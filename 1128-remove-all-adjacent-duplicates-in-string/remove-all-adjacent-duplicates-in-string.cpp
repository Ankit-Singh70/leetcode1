class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            bool found=false;
            while(!st.empty() && st.top()==s[i]){
                st.pop();
                found=true;
            }
            if(found==false){
                st.push(s[i]);
            }

        }
            s.clear();
            while(!st.empty()){
               s.push_back(st.top());
               st.pop();
            }
             reverse(s.begin(),s.end());
        
        return s;
    }
};