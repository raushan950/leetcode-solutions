class Solution {
public:
    int longestMountain(vector<int>& arr) {

        int maxlen=0;
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
                int r=i;
                int l=i;

            
            while(l>0&&arr[l]>arr[l-1]){
                l--;
            }
            while(r<arr.size()-1&&arr[r]>arr[r+1]){
                r++;
            }
            maxlen=max(maxlen,r-l+1);
            }
          
        }

        return maxlen;
    

        
    }
};