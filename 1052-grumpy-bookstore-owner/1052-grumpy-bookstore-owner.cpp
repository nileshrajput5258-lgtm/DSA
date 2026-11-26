
class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

        int sum = 0;

        // Customers already satisfied
        for(int i = 0; i < customers.size(); i++) {
            if(grumpy[i] == 0) {
                sum += customers[i];
            }
        }

        // Calculate extra customers in first window
        int extra = 0;

        for(int i = 0; i < minutes; i++) {
            if(grumpy[i] == 1) {
                extra += customers[i];
            }
        }

        int maxi = extra;

        // Sliding window
        for(int i = minutes; i < customers.size(); i++) {

            if(grumpy[i] == 1) {
                extra += customers[i];
            }

            if(grumpy[i - minutes] == 1) {
                extra -= customers[i - minutes];
            }

            maxi = max(maxi, extra);
        }

        return sum + maxi;
    }
};