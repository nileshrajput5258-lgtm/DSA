class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        int low = 0;
        int high = 0;
        long long res = 0;
        long long pairs = 0;
        unordered_map<int , int > hash;

        while(high < nums.size()){
            pairs = pairs + hash[nums[high]];
            hash[nums[high]]++;

            while(pairs >= k){
                res += nums.size() - high;
                hash[nums[low]]--;
                pairs = pairs - hash[nums[low]];
                low++;
            }
            high++;
        }
        return res;
        
       
    }
    //  return res;
};