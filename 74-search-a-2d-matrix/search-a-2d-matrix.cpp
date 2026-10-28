class Solution {
public:
    bool binarysearch(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int st = 0;
        int end = rows * cols - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            int row = mid / cols; //remember 
            int col = mid % cols;

            if (matrix[row][col] == target) {
                return true;
            } 
            else if (matrix[row][col] > target) {
                end = mid - 1;
            } 
            else if (matrix[row][col] < target) {
                st = mid + 1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        return binarysearch(matrix,target);
    }
};