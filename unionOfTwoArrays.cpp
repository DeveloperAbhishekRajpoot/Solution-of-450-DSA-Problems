//This problem can also be solve in constant extra space but for this we require the arrays to be sorted ...

class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        unordered_set<int> s;
        for( int i = 0; i<a.size(); i++){
            s.insert(a[i]);
        }
        
        for( int i = 0; i<b.size(); i++){
            s.insert(b[i]);
        }
        
        int ans = s.size();
        return ans;
    }
};