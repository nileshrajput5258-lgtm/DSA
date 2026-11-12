class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int low = 0;
        int high = k-1;
        double sum = 0;
        
        for(int i = low; i<=high; i++){
            sum += nums[i];

        }
        double avg = (double)sum/k;
        double res =  avg;

   for(high = k; high<nums.size(); high++){
           
           sum = sum + nums[high] - nums[low];
           avg = (double)sum/k;
          
           res = max(res , avg);
           low++;
        }
        return res;
    }
};