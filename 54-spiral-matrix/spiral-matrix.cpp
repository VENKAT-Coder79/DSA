class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();    // no.row
        int col = matrix[0].size(); // no. columns
        vector<int> ans;

        int firstrow = 0;
        int firstcol = 0;
        int lastrow = row - 1;
        int lastcol = col - 1;
        while (firstrow <= lastrow && firstcol <= lastcol) {

            // print first row ,column wise
            for (int col = firstcol; col <= lastcol; col++) {
                ans.push_back(matrix[firstrow][col]);
            }
            firstrow++;

            // print last col ,row wise
            for (int row = firstrow; row <= lastrow; row++) {
                ans.push_back(matrix[row][lastcol]);
            }
            lastcol--;

            // print last row ,reverse col wise
            if (firstrow <= lastrow) {
                for (int col = lastcol; col >= firstcol; col--) {
                    ans.push_back(matrix[lastrow][col]);
                }
            }
            lastrow--;

            // print first col ,reverse row wise
            if (firstcol <= lastcol) {
                for (int row = lastrow; row >= firstrow; row--) {
                    ans.push_back(matrix[row][firstcol]);
                }
            }
            firstcol++;
        }
        return ans;
    }
};