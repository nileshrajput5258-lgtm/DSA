class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int low = 0;
        int high = k-1;
        int sum = 0;
        for(int i = 0; i<=high; i++){
         sum += arr[i];
        }
        int avg = sum/k;
        int count = 0;
        if(avg >= threshold){
            count++;
        }
        for(int i = k;  i< arr.size(); i++){
         
         sum = sum - arr[low]+arr[i];
         avg = sum/k;
         if(avg >= threshold){
            count++;
         }
         low++;
        }
        return count;
    }
};