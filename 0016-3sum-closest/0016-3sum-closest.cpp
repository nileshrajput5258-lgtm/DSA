class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end());
        int i = 0;
        int j = i+1;
        int k = nums.size()-1;
        int ans = nums[i]+nums[j]+nums[k];
        while(i < nums.size()-2){
            
            while(j < k){
               
                int sum = nums[i]+nums[j]+nums[k];
                if(sum == target){
                    return sum;
                }

                int diff1 = abs(sum - target);
                int diff2 = abs(ans-target);
                if(diff1 < diff2){
                    ans = sum;
                    
                }
                if(sum < target ){
                j++;
                }
                else{
                    k--;
                }
                
               
                

                }

                i++;
                j = i+1;
                k = nums.size()-1;
               
            
                

            }
             return ans;
        }
    
};