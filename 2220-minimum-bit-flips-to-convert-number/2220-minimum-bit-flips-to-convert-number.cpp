class Solution {
public:
    int minBitFlips(int start, int goal) {
        int cnt=0;
        for(int i=0;i<32;i++){
            int bits=(start>>i)&1;
            int bitg=(goal>>i)&1;
            if(bits^bitg){
                cnt++;
            }
        }
        return cnt;
        
    }
};