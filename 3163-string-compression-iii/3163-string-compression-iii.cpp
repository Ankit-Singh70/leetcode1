class Solution {
public:
    string compressedString(string word) {
        int n=word.length();
        char ch=word[0];
        int count=1;
        string comp="";
        for(int i=1;i<n;i++){
            if(word[i]==ch && count<9){
                count++;
            }
            else{
                comp.push_back(count+'0');
                comp+=ch;
                count=1;
                ch=word[i];
            }
        }
        comp.push_back(count+'0');
                comp+=ch;
                return comp;
    }
};