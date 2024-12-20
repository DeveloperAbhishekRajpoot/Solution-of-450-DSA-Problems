// solved on leetcode 


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mincost = prices[0];
        int ans = 0;

        for ( int i = 1; i<prices.size(); i++){
            if( prices[i] > mincost){
                int temp = prices[i] - mincost ;
                ans = max(temp , ans);
            }

            mincost = min(mincost , prices[i]);
        }

        return ans;
    }
};