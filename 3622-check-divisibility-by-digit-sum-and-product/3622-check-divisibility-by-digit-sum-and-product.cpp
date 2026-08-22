class Solution {
public:
    bool checkDivisibility(int n) {
        int ds=0;
        int dp=1;
        int N=n;
        while(n>0){
            int digit=n%10;
            ds+=digit;
            dp*=digit;
            n=n/10;

        }
        if(N%(ds+dp)==0){
            return true;
        }
        return false;
        
    }
};