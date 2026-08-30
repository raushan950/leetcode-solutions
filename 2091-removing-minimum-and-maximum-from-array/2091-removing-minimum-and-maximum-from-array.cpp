class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int n=nums.size();
        int mi=-1;
        int mai=-1;
        for(int i=0;i<n;i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                mai=i;
            }if(nums[i]<mini){
                mini=nums[i];
                mi=i;
            }
        }
      
        int df=max(mi+1,mai+1);
        int db=max(n-mi,n-mai);
        int mixed=min(mi+1,mai+1)+min(n-mai,n-mi);
        return min({df,db,mixed});

    

      
        
    }
};