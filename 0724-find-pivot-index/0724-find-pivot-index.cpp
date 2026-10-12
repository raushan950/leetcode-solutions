
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lsum = 0;
        int rsum = 0;
        int n = nums.size();

        for (int i = 1; i < n; i++) {
            rsum += nums[i];
        }

        if (rsum == 0) {
            return 0;
        }

        for (int i = 0; i < n; i++) {
            if (lsum == rsum) {
                return i;
            }

            lsum += nums[i];
            if (i + 1 < n) {
                rsum -= nums[i + 1];
            }
        }

        return -1;
    }
};
