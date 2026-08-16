class Solution {
    public int minEatingSpeed(int[] piles, int h) {
        int low=1;
        int high=0;
        for(int banana:piles){
            high=Math.max(banana,high);
        }
    
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
             long hrs=0;
            for(int banana:piles){
            hrs+=(banana+mid-1)/mid;
            }
            if(hrs<=h){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
        
    }
};