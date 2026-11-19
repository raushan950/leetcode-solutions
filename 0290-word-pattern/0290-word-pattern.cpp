
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mp1;
        unordered_map<string,char> mp2;

        stringstream ss(s);
        string w;
        int i=0;

        while(ss >> w){
            if(i >= pattern.size()) return false;

            char ch = pattern[i];

            if(mp1.count(ch) && mp1[ch] != w)
                return false;

            if(mp2.count(w) && mp2[w] != ch)
                return false;

            mp1[ch] = w;
            mp2[w] = ch;

            i++;
        }

        return i == pattern.size();
    }
};
