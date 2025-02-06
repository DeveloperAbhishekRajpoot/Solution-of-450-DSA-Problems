class solution{
    public:
        vector<int> spirallyTraverse(vector<vector<int>> &mat) {
    int rows = mat.size();
    int cols = mat[0].size();
    
    vector<int> ans;
    
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
    
    while (left <= right && top <= bottom) {
        // Move left to right  
        for (int i = left; i <= right; i++) {
            ans.push_back(mat[top][i]);
        }
        top++;

        // Move top to bottom
        for (int j = top; j <= bottom; j++) {
            ans.push_back(mat[j][right]);
        }
        right--;

        // Move right to left (Check boundary to avoid duplicate traversal)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                ans.push_back(mat[bottom][i]);  
            }
            bottom--;
        }

        // Move bottom to top (Check boundary to avoid extra elements)
        if (left <= right) {
            for (int j = bottom; j >= top; j--) {
                ans.push_back(mat[j][left]);
            }
            left++;
        }
    }
    
    return ans;
}

}