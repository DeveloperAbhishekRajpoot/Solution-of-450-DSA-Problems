class Solution {
  public:
    
    vector<int> factorial(int n) {
        vector<int> ans(1, 1);  // Initialize with 1 (0! = 1, 1! = 1)
        
        for (int i = 2; i <= n; i++) {
            int carry = 0;
            
            // Multiply each digit by i and add carry
            for (int j = ans.size() - 1; j >= 0; j--) {
                int currNum = ans[j] * i + carry;
                ans[j] = currNum % 10;  // Store the last digit
                carry = currNum / 10;  // Update carry
            }
            
            // Insert remaining carry as new digits at the beginning
            while (carry > 0) {
                ans.insert(ans.begin(), carry % 10);
                carry /= 10;
            }
        }
        
        return ans;
    }
};