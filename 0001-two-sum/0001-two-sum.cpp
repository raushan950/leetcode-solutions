// class Solution {
// public:

//    vector<int> twoSum(vector<int>& nums, int target) {
//         int n = nums.size();
//         vector<pair<int,int>> arr;
//         for(int i=0;i<n;i++){
//             arr.push_back({nums[i], i});  // store value with index
//         }

//         // sort by value
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(arr[i].first > arr[j].first){
//                     swap(arr[i], arr[j]);
//                 }
//             }
//         }

//         int i=0, j=n-1;
//         while(i < j){
//             int sum = arr[i].first + arr[j].first;
//             if(sum == target)
//                 return {arr[i].second, arr[j].second}; // return original indices
//             else if(sum > target)
//                 j--;
//             else
//                 i++;
//         }

//         return {}; // no pair found
//     }
// };
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target)
                    return {i, j};
            }
        }
        return {};
    }
};
