
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        int cols = grid[0].size();

        for (int i = 0; i < grid.size(); i++) {
            int beg = 0;
            int end = cols - 1;
            int firstNeg = cols;

            while (beg <= end) {
                int mid = beg + (end - beg) / 2;

                if (grid[i][mid] < 0) {
                    firstNeg = mid;
                    end = mid - 1;
                } else {
                    beg = mid + 1;
                }
            }

            count += cols - firstNeg;
        }

        return count;
    }
};
