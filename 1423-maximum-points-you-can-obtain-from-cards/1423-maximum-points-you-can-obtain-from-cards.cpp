
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        
        // Sum of first k cards (from the left)
        int lsum = 0;
        for (int i = 0; i < k; i++) {
            lsum += cardPoints[i];
        }
        
        int ans = lsum;  // The initial answer is taking all the cards from the left
        
        // Now, we will start replacing the left cards with right cards, one by one
        int rsum = 0;
        for (int i = 0; i < k; i++) {
            // Remove one card from the left (subtract from lsum)
            lsum -= cardPoints[k - i - 1];
            // Add one card from the right (add to rsum)
            rsum += cardPoints[n - i - 1];
            // Update the maximum score
            ans = max(ans, lsum + rsum);
        }
        
        return ans; 
    }
};
