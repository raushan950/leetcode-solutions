class Solution {
public:
    int maxProduct(vector<int>& nums) {
         int n = nums.size();
        int maxP = nums[0];
        int minP = nums[0];
        int ans = nums[0];

        for(int i = 1; i < n; i++){
            int curr = nums[i];

            if(curr < 0)  // swap because negative flips max/min
                swap(maxP, minP);

            maxP = max(curr, maxP * curr);
            minP = min(curr, minP * curr);

            ans = max(ans, maxP);
        }
        return ans;
    }
};