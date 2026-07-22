class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int ans=INT_MIN;
        unordered_map<char,int>freq;
      int l=0;
      for(int r=0;r<n;r++){
        freq[s[r]]++;
        while(freq[s[r]]>1){
            freq[s[l]]--;
            l++;

        }
        ans=max(ans,r-l+1);
      }
      if(ans==INT_MIN)
      return 0;
      return ans;

        
    }
};