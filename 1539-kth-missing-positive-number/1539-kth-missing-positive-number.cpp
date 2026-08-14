class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_set<int>set(arr.begin(),arr.end());
        vector<int>ans;
        int n=arr.size();
        int x=1;
        while(ans.size()<k){
            if(!set.contains(x)){
                ans.push_back(x);
                
            }
            x++;
            
        }
        return ans[k-1];
        
    }
};