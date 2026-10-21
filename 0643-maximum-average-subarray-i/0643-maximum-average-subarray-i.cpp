class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int low = 0;
        int high = k - 1;
        double sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        double avg = sum / k;
        double res = avg;
        for (int high = k; high < nums.size(); high++) {

            sum = sum + nums[high] - nums[low];
            avg = sum / k;
            res = max(res, avg);

            low++;
        }
        return res;
    }
};