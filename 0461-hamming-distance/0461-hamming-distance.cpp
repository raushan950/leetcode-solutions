class Solution {
public:
    int hammingDistance(int x, int y) {
        int cnt=0;
        for(int i=0;i<32;i++){
            int bitx=(x>>i)&1;
            int bity=(y>>i)&1;
            if(bitx^bity){
                cnt++;
            }
        }
        return cnt;

        
    }
};