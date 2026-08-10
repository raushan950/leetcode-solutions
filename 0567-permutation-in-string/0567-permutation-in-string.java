class Solution {
    public boolean checkInclusion(String s1, String s2) {  

        int[] freq1=new int[26];
        int[] freq2=new int[26];

        if(s1.length()>s2.length())
        return false;

        for(char c:s1.toCharArray()){
            freq1[c-'a']++;
        }
        int k=s1.length();
        int l=0;
        for(int r=0;r<k;r++){
            freq2[s2.charAt(r)-'a']++;
        }

        if(Arrays.equals(freq1,freq2))
        return true;

        for(int r=k;r<s2.length();r++){
            freq2[s2.charAt(l)-'a']--;
            l++;
            freq2[s2.charAt(r)-'a']++;
            

            if(Arrays.equals(freq1,freq2))
            return true;
        }

        return false;

  
    }
}