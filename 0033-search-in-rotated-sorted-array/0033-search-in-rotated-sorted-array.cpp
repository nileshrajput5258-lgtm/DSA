class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int n = nums.size();
        int high = n - 1;
        if(n == 1){
            if(nums[low] == target)
            return 0;
            else
            return -1;
        }
        
        int res = -1;
        
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] > nums[n - 1]) {
                low = mid + 1;
            } else {
                res = mid;
                high = mid - 1;
            }
        }
        
        if (res != 0) {
            int i = 0;
            int j = res - 1;
            while (i <= j) {
                int m = (i + j) / 2;
                if (nums[m] == target) {
                    return m;
                } else {
                    if (nums[m] < target) {
                        i = m + 1;
                    } else {
                        j = m - 1;
                    }
                }
            }

            int k = res;
            int l = n - 1;
            while (k <= l) {
                int m = (k + l) / 2;
                if (nums[m] == target) {
                    return m;
                } else {
                    if (nums[m] < target) {
                        k = m + 1;
                    } else {
                        l = m - 1;
                    }
                }
            }
            return -1;
        } else {
            int k = res;
            int l = n - 1;
            while (k <= l) {
                int m = (k + l) / 2;
                if (nums[m] == target) {
                    return m;
                } else {
                    if (nums[m] < target) {
                        k = m + 1;
                    } else {
                        l = m - 1;
                    }
                }
            }
            return -1;
        }
        }
    
};