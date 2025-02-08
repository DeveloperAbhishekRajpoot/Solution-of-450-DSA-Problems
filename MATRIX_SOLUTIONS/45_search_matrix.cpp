/*
First we will find the row in which the target element is present. For that we will use binary search on rows. We will start from the first row and check if the target element is present in that row. If the target element is less than the first element of the row, then we will move to the previous row. If the target element is greater than the last element of the row, then we will move to the next row. If the target element is in the range of the row, then we will perform binary search on that row to find the target element.
*/

class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int rows = matrix.size();
            int cols = matrix[0].size();
    
            // Binary search on rows to find the potential row
            int top = 0, bottom = rows - 1;
            while (top <= bottom) {
                int midRow = (top + bottom) / 2;
    
                if (target < matrix[midRow][0]) {
                    bottom = midRow - 1;
                } 
                else if (target > matrix[midRow][cols - 1]) {
                    top = midRow + 1;
                } 
                else {
                    // The target is in this row
                    int left = 0, right = cols - 1;
                    while (left <= right) {
                        int midCol = (left + right) / 2;
                        if (matrix[midRow][midCol] == target) {
                            return true;
                        } else if (matrix[midRow][midCol] < target) {
                            left = midCol + 1;
                        } else {
                            right = midCol - 1;
                        }
                    }
                    return false;
                }
            }
            return false;
        }
    };
    