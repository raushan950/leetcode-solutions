class Solution {
    public int maxArea(int[] height) {
        int l=0;
        int area=0;
        int ans=0;
        int r=height.length-1;
        while(l<r){
            int h=Math.min(height[r],height[l]);
            area=h*(r-l);
            ans=Math.max(area,ans);
            if(height[l]>height[r]){
                r--;
            }else{
                l++;
            }
            
        }
        return ans;


        
    }
}