#include <unordered_map>
class Solution {
public:
    int slidingwindow(vector<int>& nums , int k){
        int i = 0; 
        int j = 0;
        unordered_map<int , int> hash;
        int res = 0;
        for(int high = j; high<nums.size(); high++){
            hash[nums[high]]++;
            if(hash.size() > k){
                while(hash.size() > k){
                    hash[nums[i]]--;
                    if(hash[nums[i]] == 0){
                        hash.erase(nums[i]);
                    }
                    i++;
                }
            }
           
                res += high - i + 1;
            
        }
        return res;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
     
         int count1  = slidingwindow(nums , k); 
          int count2  = slidingwindow(nums , k-1); 
          int res = count1 - count2; 
          return res;
        
      
    }
};