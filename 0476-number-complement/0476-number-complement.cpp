class Solution {
public:
    int findComplement(int num) {
        int ans=0;
        int i=0;
        while(num){
            int bit=(num&1);
            int rbit=(!bit);
            ans=(ans)|(rbit<<i);
            num=num>>1;
            i++;
            
        }
        return ans;
    }
};