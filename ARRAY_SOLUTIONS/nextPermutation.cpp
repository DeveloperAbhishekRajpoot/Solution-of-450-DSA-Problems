// step 1 find idx 1 for nums[i] > nums[i+1] from back 
// step 2 find the index whose value is greater than the idx1 value 
//step 3 swap( nums[idx1] , nums[idx2])
//step 4 reverse (nums , i + 1 , end -1)
 

class Solution {
public:

    void reverse(vector<int>& nums, int start, int end) {
        while (start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }
    void nextPermutation(vector<int>& nums) {
        if(nums.size() <= 1)
            return;
        
        int i = nums.size() -2;

        while( i>=0 && nums[i] >= nums[i+1])
            i--;
        
        if( i >= 0){
            int j = nums.size() -1;
            while( nums[j] <= nums[i])
                j--;
            
            swap(nums[i] , nums[j]);
        }

        reverse(nums , i+1 , nums.size() -1);
    }
};