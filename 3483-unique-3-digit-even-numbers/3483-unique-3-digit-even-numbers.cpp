class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        set<int>nums;
        int n=digits.size();
        for(int i=0;i<n;i++){//h place
            for(int j=0;j<n;j++){//t place
                for(int k=0;k<n;k++){//o place
                    if(i==j||i==k||k==j)
                    continue;
                    int a=digits[i],b=digits[j],c=digits[k];
                    if(a==0)continue;
                    if(c%2!=0)continue;
                    int num=a*100+b*10+c;
                    nums.insert(num);

                }
            }
        }
        return nums.size();
    }
};