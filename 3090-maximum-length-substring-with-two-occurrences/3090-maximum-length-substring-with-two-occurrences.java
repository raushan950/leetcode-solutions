class Solution {
    public int maximumLengthSubstring(String s) {
        int maxlen=0;
        int l=0;
        // HashMap<Character,Integer>freq=new HashMap<>();
        int []freq=new int[26];
        for(int r=0;r<s.length();r++){
            char ch=s.charAt(r);
            // freq.put(ch,freq.getOrDefault(ch,0)+1);
            freq[ch-'a']++;

            while(freq[ch-'a']>2){
                char lch=s.charAt(l);
                // freq.put(lch,freq.getOrDefault(lch,0)-1);
                freq[lch-'a']--;
                l++;
                
            }
            maxlen=Math.max(maxlen,r-l+1);
        }
        return maxlen;



        
        
    }
}