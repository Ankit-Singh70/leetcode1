class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int maxlen = 0;
        vector<int> hash(26, 0);
        int maxf = 0;
        int left = 0;
        for (int right = 0; right < n; right++) {
            hash[s[right] - 'A']++;
            maxf = max(maxf, hash[s[right] - 'A']);
            if (right - left + 1 - maxf > k) {
                hash[s[left] - 'A']--;
                maxf=0;
                for(int i=0;i<26;i++){maxf=max(maxf,hash[i]);}
                left++;
            }
            if (right - left + 1 - maxf <= k){
             maxlen = max(maxlen, right - left + 1);
            }
        }
        return maxlen;
    }
};
