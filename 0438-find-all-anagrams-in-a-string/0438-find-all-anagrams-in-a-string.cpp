class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        if(p.size()>s.size())
        return ans;
        for(char c:p){
            freq1[c-'a']++;
        }
        int k=p.size();
        for(int r=0;r<k;r++){
            freq2[s[r]-'a']++;
        
        }
        if(freq1==freq2)
        ans.push_back(0);
        int l=0;
        for(int r=k;r<s.size();r++){
            freq2[s[l]-'a']--;
            l++;
            freq2[s[r]-'a']++;
            if(freq1==freq2)
            ans.push_back(l);
        }
        return ans;

        
    }
};