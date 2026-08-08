class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n=s.length();
        HashMap<Character,Integer>freq=new HashMap<>();
        int l=0;
        int ans=0;
        for(int r=0;r<n;r++){
            char ch=s.charAt(r);
            freq.put(ch,freq.getOrDefault(ch,0)+1);

            while(freq.get(ch)>1){
                char lchar=s.charAt(l);
                freq.put(lchar,freq.getOrDefault(lchar,0)-1);
                l++;
            }
            ans=Math.max(ans,r-l+1);
        }
        return ans;
        
    }
}