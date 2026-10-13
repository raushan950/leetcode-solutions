class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int mi=-1;
        int maxi=INT_MIN;
        int n=arr.size();
        if(n<3)return false;
        for(int i=0;i<n;i++){
            if(arr[i]>maxi){
                maxi=arr[i];
                mi=i;
            }
        }
        if(mi==0||mi==n-1)return false;
        for(int i=1;i<=mi;i++){
            if(arr[i]<=arr[i-1])
            return false;
        }
        for(int i=mi+1;i<n;i++){
            if(arr[i]>=arr[i-1])
            return false;
        }
        return true;

        
    }
};