class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int low = 0;
        int high = k - 1;
        int sum = 0;
        for (int i = low; i <= high; i++) {
            sum += arr[i];
        }

        int count = 0;
        int avg = sum / k;
        if (avg >= threshold) {
            count++;
        }
        for (high = k; high < arr.size(); high++) {
            sum = sum + arr[high] - arr[low];
            avg = sum / k;
            low++;
            if (avg >= threshold) {
                count++;
            }
        }
        return count;
    }
};