class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;

        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        int j = 2;

        while (j < nums.size()) {
            if (arr1.back() > arr2.back()) {
                arr1.push_back(nums[j]);
            } else {
                arr2.push_back(nums[j]);
            }
            j++;
        }

        vector<int> result;

        result.insert(result.end(), arr1.begin(), arr1.end());
        result.insert(result.end(), arr2.begin(), arr2.end());

        return result;
    }
};