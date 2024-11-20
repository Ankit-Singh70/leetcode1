class Solution {
public:
    int takeCharacters(string s, int k) {
        int n = s.length();
        int a = 0;
        int b = 0;
        int c = 0;
        int window = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a') {
                a++;
            } else if (s[i] == 'b') {
                b++;
            } else {
                c++;
            }
        }
        if (a < k || b < k || c < k) {
            return -1;
        }

        int i = 0;
        int j = 0;

        while (j < n) {
            if (s[j] == 'a') {
                a--;
            } else if (s[j] == 'b') {
                b--;
            } else if (s[j] == 'c') {
                c--;
            }
            while (i <= j && (a < k || b < k || c < k)) {
                if (s[i] == 'a') {
                    a++;
                }

                else if (s[i] == 'b') {
                    b++;
                }

                else if (s[i] == 'c') {
                    c++;
                }

                i++;
            }
            window = max(window, j - i + 1);
            j++;
        }
        return n - window;
    }
};