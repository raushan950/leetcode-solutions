class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            int need=target-nums[i];
            if(map.count(need)){
                //  ans.push_back(mp[need]);
                //     ans.push_back(i);
                return{i,map[need]};

            }
            map[nums[i]]=i;
           

        }
        return {-1};
        
    }
};