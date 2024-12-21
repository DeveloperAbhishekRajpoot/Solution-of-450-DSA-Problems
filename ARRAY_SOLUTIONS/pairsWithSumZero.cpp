// To run the test cases use this gfg link gisven below 
// https://www.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        sort(arr.begin() , arr.end());
        int i = 0 , j = arr.size() -1;
        
        set<vector<int>> s;
        while( i < j){
            int sum = arr[i] + arr[j];
            
            if( sum == 0){
                s.insert({arr[i] , arr[j]});
                i++; j--;
            }
            else if(sum < 0){
                i++;
            }
            else{
                j--;
            }
        }
        
        vector< vector < int > > ans;
        
        for( auto it : s){
            ans.push_back(it);
        }
        
        return ans;
    }
};