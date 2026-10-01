class Solution {
   
public:
    bool isValid(string s) {
        stack<char>St;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch=='('|| ch=='{'||ch=='['){
                St.push(ch);
            }else{
                if(!St.empty()){
                    char top=St.top();
                
                if((ch==')'&& top=='(')|| (ch=='}'&& top=='{')|| (ch==']'&& top=='[')){
                    St.pop();
                }else{
                    return false;
                }
            }else{
                  return false;

            }
        }
        }
        return St.empty();

        
    }
};