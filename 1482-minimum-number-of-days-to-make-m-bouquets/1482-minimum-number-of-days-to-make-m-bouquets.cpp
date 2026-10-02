class Solution {
    private:
    bool possible(vector<int>& bloomDay, int day, int m, int k) {
    int cnt = 0;
    int nofB = 0;

    for (int i = 0; i < bloomDay.size(); i++) {
        if (bloomDay[i] <= day) {
            cnt++;
            if (cnt == k) {
                nofB++;
                cnt = 0; // reset after making bouquet
            }
        } else {
            cnt = 0;
        }
    }
    return nofB >= m;
}
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
       if ((long long)m * k > n) {
        return -1;
    }
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            mini=min(mini,bloomDay[i]);
            maxi=max(maxi,bloomDay[i]);
        }
        int low=mini;
        int high=maxi;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(bloomDay,mid,m,k)){
                high=mid-1;

            }else{
                low=mid+1;
            }
        }
        return low;
        
    }
};