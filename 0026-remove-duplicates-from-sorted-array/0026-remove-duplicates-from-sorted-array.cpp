class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int i = 0;
       int j = i+1;
       while(j<nums.size()){
        if(nums[i] != nums[j]){
            swap(nums[i+1] , nums[j]);
            j++;
            i++;
        }
        else{
            j++;
        }
       } 
       return i+1;
    }
};