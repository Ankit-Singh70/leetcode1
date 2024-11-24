class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;
        for (int i = 1; i <= n; i++) {
            q.push(i);
        }
        int count=k-1;
        while(q.size()>1){
             while(count!=0){
                q.push(q.front());
                q.pop();
                count--;
             }
             q.pop();
             count=k-1;
        }
        return q.front();
    }
};