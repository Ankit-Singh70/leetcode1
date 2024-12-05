

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        deque<int> q;
        int count = 0;
        for (int i = 0; i < n; i++) {
            q.push_back(i);
        }
        while (tickets[k] != 0) {
            int front = q.front();  
            q.pop_front();          
            tickets[front]--;
            count++;
            if (tickets[front] > 0) {
                q.push_back(front);
            }
        }
        
        return count;
    }
};
