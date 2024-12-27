// use GfG to run this code and check the output
// https://www.geeksforgeeks.org/problems/palindrome-string0817/1

class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool isPalindrome(string& s) {
        int left = 0 , right = s.size()-1;
        
        while( left < right){
            if( s[left] != s[right]){
                return false;
            }
            left++; right--;
        }
        
        return true;
    }
};