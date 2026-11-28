class Solution {
public:
    int max_arr(vector<int> &piles){
        int max = INT_MIN;
        int i = 0;
        while(i < piles.size()){
            if(piles[i] > max)
                max = piles[i];   
                i++;
        }
        return max;
    }
    long long   fun(vector<int>& piles ,int n , int &speed){
        long long h = 0;
        int j = 0;
        while(j<n){
            h = h+(piles[j]/speed);
            if(piles[j]%speed != 0){
                h++;
            }
            j++;
        }
        return h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = max_arr(piles);
        int  n = piles.size();
        int res = -1;
        while(low <= high){
            int guess = low + (high - low) / 2;;
            long long   hour = fun(piles ,n , guess);
            if(hour > h){
                low = guess+1;
            }
            else{
                res = guess;
                high = guess-1;
            }
        }
        return res;
    }
};