class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> arr;
        if(nums.empty()) return arr;
        int i = 0;
        while(i < nums.size() && nums[i] < 0){
            i++;
        }
        i--;
        int j = i+1;
        while(i >= 0 && j < nums.size()){
            int  a = nums[i]*nums[i];
            int  b = nums[j]*nums[j];
            if( a < b){
                arr.push_back(nums[i]*nums[i]);
                i--;
            }
            else{
                arr.push_back(nums[j]*nums[j]);
                j++;
            }
        }
        if(i >= 0){
        while(i >= 0){
            arr.push_back(nums[i]*nums[i]);
            i--;
        }
        }
         if(j < nums.size()){
        while(j < nums.size()){
            arr.push_back(nums[j]*nums[j]);
            j++;
        }
        }
        return arr;
    }
};