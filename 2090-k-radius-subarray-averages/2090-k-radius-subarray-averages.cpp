class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int i = 0;

        int j = 2*k;
        long long  sum = 0;
        vector<int> res;
        if(nums.size() < 2*k+1){
    return vector<int>(nums.size(), -1);
}
        if(j < nums.size()){
           
            for(int l = 0; l <= j; l++){
                sum += nums[l];
            }
        }
        for(int high = 0; high < nums.size(); high++){
            if(high < k || high+k >= nums.size()){
                res.push_back(-1);
            }
            else{
                int avg = sum/(2*k+1);
                res.push_back(avg);

            if(high+k+1 < nums.size()){
                sum = sum - nums[i] + nums[high+k+1];
                i++;
        }

            }
        }
        return res;
    }
};