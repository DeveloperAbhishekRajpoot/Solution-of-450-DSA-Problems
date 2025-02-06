// https://www.geeksforgeeks.org/problems/rotate-by-90-degree0356/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

// practice here ^

void rotate(vector<vector<int> >& mat) {
    
    // step 1  getting the tranpose of  it 
    
    int rows = mat.size();
    int clns = mat[0].size();
    
    for( int i=0;i<rows; i++){
        for( int j=i+1; j<clns; j++){
            swap(mat[i][j] , mat[j][i]);
        }
    }
    
    // step 2 Reverse each row 
    
    for( int i = 0; i<rows; i++){
        reverse(mat[i].begin() , mat[i].end());
    }
    
}