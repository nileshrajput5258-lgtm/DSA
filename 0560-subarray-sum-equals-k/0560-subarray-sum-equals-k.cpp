class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        unordered_map<int, int> hash;
        hash[0] = 1;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int q = sum - k;
            if (hash.find(q) != hash.end()) {
                ans += hash[q];
            }

            hash[sum]++;
        }
        return ans;
    }
};