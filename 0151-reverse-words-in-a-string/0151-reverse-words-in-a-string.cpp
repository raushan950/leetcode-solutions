class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string ans="";
        string word;
        stack<string>st;
        while(ss>>word){
            st.push(word);


        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
            if(!st.empty())
            ans+=" ";
        }
        return ans;
       
        


        
    }
};