// aage badete jao jaha sum negative hua reset the sum to zero 

class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        int ans = INT_MIN; 
        int sum = 0; 
        
        for (auto num : arr) {
            sum += num;
            
            // Update the maximum subarray sum found so far
            ans = max(ans, sum);
            
            // Reset sum to zero if it becomes negative
            if (sum < 0) {
                sum = 0;
            }
        }
        
        return ans;
    }
};
