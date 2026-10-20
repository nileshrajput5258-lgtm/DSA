class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       vector<int> arr;
       int i = 0;
       int j = numbers.size()-1;
       while(i < j ){
       int sum = numbers[i] + numbers[j];
       if(sum == target){
        arr.push_back(i+1);
        arr.push_back(j+1);
        return arr;
       }
       else{
        if(sum < target){
            i++;
        }
        else{
            j--;
        }
       }
       }
       return arr;

    }
};