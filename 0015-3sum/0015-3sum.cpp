class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if (nums.size() < 3) {
            return res;
        }
        int i = 0;
        int j = 1;
        int k = nums.size() - 1;
        sort(nums.begin(), nums.end());
        while (i < nums.size() - 2) {
            if(nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) {
                i++;
                continue;
            }
            j = i + 1;
            k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) {
                    vector<int> s = {nums[i], nums[j], nums[k]};
                    res.push_back(s);

                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1]) {
                        j++;
                    }
                    while (j < k && nums[k] == nums[k + 1]) {
                        k--;
                    }
                } else if (sum < 0) {

                    j++;

                } else {
                    k--;
                }
            }
            i++;
        }
        return res;
    }
};