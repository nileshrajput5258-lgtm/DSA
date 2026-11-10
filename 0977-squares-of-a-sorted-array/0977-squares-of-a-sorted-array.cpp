class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int j = 0;
        while(j < nums.size() && nums[j] < 0){
            j++;
        }
        int i = j-1;
        int k = 0;
        while(k < nums.size()){
            nums[k] = nums[k]*nums[k];
            k++;
        }
        vector<int> arr;
        while(i >= 0 && j < nums.size()){
              if(nums[i] < nums[j]){
                arr.push_back(nums[i]);
                i--;
              }
              else{
                arr.push_back(nums[j]);
                j++;
              }
        }
        if(j < nums.size()){
            while(j < nums.size()){
                arr.push_back(nums[j]);
                j++;
            }
        }
        if(i >= 0){
            while(i >= 0){
                arr.push_back(nums[i]);
                i--;
            }
        }
        return arr;
    }
};