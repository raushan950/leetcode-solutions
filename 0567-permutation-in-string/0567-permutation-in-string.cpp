class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        if(s1.size()>s2.size())
        return false;
        for(char c:s1){
            freq1[c-'a']++;
        }
        int k=s1.size();
        int l=0;
        for(int r=0;r<k;r++){
            freq2[s2[r]-'a']++;
        }
        if(freq1==freq2)
        return true;
        for(int r=k;r<s2.size();r++){
            freq2[s2[l]-'a']--;
            l++;
            freq2[s2[r]-'a']++;
            
            if(freq1==freq2)
            return true;
        }

        return false;





        
    }
};