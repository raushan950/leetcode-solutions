class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi=INT_MIN;
        int n=nums.size();
        for(int num:nums){
            maxi=max(maxi,num);
        }
        int moves=0;
        for(int i=0;i<n;i++){
            moves+=maxi-nums[i];
        }
        return moves;
        
    }
};