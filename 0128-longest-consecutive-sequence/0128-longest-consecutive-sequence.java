class Solution {
    public int longestConsecutive(int[] nums) {

        HashSet<Integer>set=new HashSet<>();
        int ans=0;
        for(int x:nums){
            set.add(x);
        }

        for(int x:set){
            if(!set.contains(x-1)){
                int cnt=1;
                int curr=x;

            while(set.contains(curr+1)){
                cnt++;
                curr++;
            }
            ans=Math.max(ans,cnt);

            }

           
        }
        return ans;
        
    }
}