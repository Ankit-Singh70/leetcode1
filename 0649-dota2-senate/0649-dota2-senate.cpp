class Solution {
public:
    string predictPartyVictory(string senate) {
        int n = senate.length();
        queue<int> idx;
        queue<int> r;
        queue<int> d;

        for (int i = 0; i < n; i++) {
            idx.push(i);
            if (senate[i] == 'R')
                r.push(i);
            else
                d.push(i);
        }
        while (idx.size() > 1) {
            if (senate[idx.front()] == 'X')
                idx.pop();
           else if (senate[idx.front()] == 'R') {
                if (d.size() == 0)
                    return "Radiant";
                else {
                    senate[d.front()] = 'X';
                    d.pop();

                    r.push(r.front());
                    r.pop();
                    idx.push(idx.front());
                    idx.pop();
                }
            } else {
                if (r.size() == 0)
                    return "Dire";
                else {
                    senate[r.front()] = 'X';
                    r.pop();

                    d.push(d.front());
                    d.pop();
                    idx.push(idx.front());
                    idx.pop();
                }
            }
        }
        if(senate[idx.front()] == 'R')
            return "Radiant";
        else
            return "Dire";
    }
};