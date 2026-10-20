class Solution {
    public int compress(char[] chars) {
        int count=1;
        StringBuilder ans=new StringBuilder();
        for(int i=0;i<chars.length-1;i++){
            if(i<chars.length-1&&chars[i]==chars[i+1]){
                count++;
            }
            else{
                ans.append(chars[i]);
                if(count>1){
                    ans.append(count);
                }
                count=1;
            }
           
        }
        ans.append(chars[chars.length-1]);
        if(count>1){
            ans.append(count);
        }
        for(int i=0;i<ans.length();i++){
            chars[i]=ans.charAt(i);
        }
        return ans.length();
        
    }
}