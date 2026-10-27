class Solution {
public:
    int minOperations(vector<int>& nums) {
    int i = 0;
    int j = i+2;
    int count = 0;
    while(j < nums.size()){
       if(nums[i] == 0){
        int s = i; 
        while(s <= j){
            if(nums[s] == 1){
                nums[s] = 0;
            }
            else{
                nums[s] = 1;
                //   count++;
            }
          
            s++;
        }
         count++;

        i++;
    j++;
    }
    else{
        i++;
        j++;
    }
    
    }
    for(int k = 0; k < nums.size(); k++){
    if(nums[k] == 0){
        return -1;
    }
    }
    return count;
    }
    
    
};