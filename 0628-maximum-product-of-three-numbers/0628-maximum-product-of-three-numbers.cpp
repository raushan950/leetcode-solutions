class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int pd1=1;
        int pd2=1;
        int n=nums.size();
        pd1=nums[n-1]*nums[n-2]*nums[n-3];
        pd2=nums[0]*nums[1]*nums[n-1];
        int ans=max(pd1,pd2);
        return ans;

        
    }
};