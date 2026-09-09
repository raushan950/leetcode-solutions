class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        int n=nums.size();
        set<vector<int>>set;
        for(int mask=0;mask<(1<<n);mask++){
            vector<int>subset;
            for(int i=0;i<n;i++){
                if(mask&(1<<i))
                subset.push_back(nums[i]);
            }
            set.insert(subset);

        }
        for(auto & it :set){
            ans.push_back(it);
        }
        return  ans;

        
    }
};