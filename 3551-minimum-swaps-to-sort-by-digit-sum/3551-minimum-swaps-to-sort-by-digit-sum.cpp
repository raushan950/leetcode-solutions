
class Solution {
public:
    int digitSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<int> sorted = nums;

        sort(sorted.begin(), sorted.end(), [&](int a, int b) {
            int sa = digitSum(a);
            int sb = digitSum(b);

            if (sa != sb)
                return sa < sb;

            return a < b;
        });

        unordered_map<int, int> pos;

        for (int i = 0; i < n; i++) {
            pos[sorted[i]] = i;
        }

        vector<int> target(n);

        for (int i = 0; i < n; i++) {
            target[i] = pos[nums[i]];
        }

        vector<bool> visited(n, false);
        int swaps = 0;

        for (int i = 0; i < n; i++) {
            if (visited[i] || target[i] == i)
                continue;

            int j = i;
            int cycleSize = 0;

            while (!visited[j]) {
                visited[j] = true;
                j = target[j];
                cycleSize++;
            }

            swaps += cycleSize - 1;
        }

        return swaps;
    }
};
