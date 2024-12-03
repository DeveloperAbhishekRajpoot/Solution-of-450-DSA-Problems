// solves this problem using kadan's algorithm ...
//https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1 

class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        int ans = arr[0];
        int curr_sum = 0;
        
        for( int i = 0; i< arr.size(); i++){
            curr_sum += arr[i];
            
            ans = max( curr_sum , ans);
            if( curr_sum < 0) 
                curr_sum = 0;
        }
        
        return ans;
    }
};