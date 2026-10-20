class Solution {
public:
    long long maximumSumOfHeights(vector<int>& heights) {
        int n=heights.size();
        long long ans=0;
        for(int i=0;i<n;i++){
            vector<int>height=heights;
            //left side
            for(int j=i-1;j>=0;j--){
                height[j]=min(height[j],height[j+1]);
            }
            //right side
            for(int j=i+1;j<n;j++){
                height[j]=min(height[j],height[j-1]);
            }
            long long sum=0;
            for(int h:height){
                sum+=h;
            }
            ans=max(ans,sum);
        }
        return ans;
        
    }
};