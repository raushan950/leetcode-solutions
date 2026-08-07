class Solution {
    public int lengthOfLastWord(String s) {
        int n=s.length()- 1;
        while(n>=0&&s.charAt(n)==' '){
            n--;
        }
        int len=0;
        while(n>=0&&s.charAt(n)!=' '){
            len++;
            n--;
        }
        return len;
        
    }
}