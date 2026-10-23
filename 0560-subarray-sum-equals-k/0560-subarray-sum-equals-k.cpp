class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        unordered_map<int , int> hash ;
        hash[0] = 1;
        int res = 0;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
            int q = sum - k;
            int freq = hash[q];
            res+=freq;
            hash[sum]++;
        }
        return res;
    }
};