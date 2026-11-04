class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int moves=0;
        int mini=INT_MAX;
        for(int num:nums){
            mini=min(num,mini);

        }
        for(int num:nums){
            moves+=num-mini;
        }
        return moves;
       

        
    }
};