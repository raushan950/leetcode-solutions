class Solution {
public:
    bool checkString(string s) {
        int bi=-1;

        for(int i=0;i<s.length();i++){
            if(s[i]=='b'){
                  bi=i;
                 break;

            }
           
        }
        for(int i=bi;i<s.length();i++){
            if(s[i]=='a')
            return false;
        }
        return true;
        
    }
};