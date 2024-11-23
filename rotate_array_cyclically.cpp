// https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1 
// check the solution on the give address on gfg 

class Solution {
  public:
    void rotate(vector<int> &arr) {
        int n = arr.size()-1;
        int temp = arr[n];
        
        for( int i = n-1; i>=0; i--){
            arr[i+1] = arr[i];
        }
        
        arr[0] = temp;
    }
};