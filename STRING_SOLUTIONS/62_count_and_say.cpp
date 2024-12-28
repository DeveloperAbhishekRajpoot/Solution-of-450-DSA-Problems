class Solution {
public:
    string countAndSay(int n) {
        string ans = "1"; 
        
        for (int num = 2; num <= n; num++) { 
            string tempans = "";
            int len = ans.length();

            // Traverse the current sequence

            for (int i = 0; i < len; ) { 
                char ch = ans[i];
                int count = 0;

            // Count consecutive occurrences of the same character
                while (i < len && ans[i] == ch) {
                    count++;
                    i++;
                }

                
                tempans.append(to_string(count));
                tempans.push_back(ch);
            }

            ans = tempans; 
        }

        return ans; 
    }
};
