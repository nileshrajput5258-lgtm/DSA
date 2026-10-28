class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int i = 0;
        int j = 0;
        long long sum = 0;
        long long len = 0;
        // sort(nums.begin() , nums.end());
        
        long long  res = 0;

        for (int high = j ; high < nums.size(); high++) {
            sum = sum + nums[high];
            len = high - i +1;
            long long product = len * sum;
            if (product >= k) {
                while(sum*len >= k){
                sum = sum - nums[i];
                len = len - 1;
                i++;
                }

            } 
            res += high - i +1;
            
        }
        return res;
    }
};