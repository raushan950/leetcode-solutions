class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int count=0;
        int prefix=0;
        mp[0]=1;
        for(int x:nums){
            prefix+=x;
            if(mp.count(prefix-k))
            count+=mp[prefix-k];
            mp[prefix]++;
        }
        return count;
        
    }
};