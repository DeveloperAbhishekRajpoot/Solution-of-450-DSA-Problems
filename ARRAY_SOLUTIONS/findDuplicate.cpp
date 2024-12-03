class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       /*
       TIME O(n)  , SPACE O(n)

        unordered_map<int , int> m;
        for( auto num : nums){
            if(m.find(num) != m.end()){
                return num;
            }
            m[num]++;
        }
        return -1;
    }
      */


    //   floays's tortoise and hare cycle detectin algorithm
    //  TIME O(n)  , SPACE O(1) 
    
    // step 1  detect the cycle 

    int slow = nums[0];
    int fast = nums[0];

    do{
        slow = nums[slow];
        fast = nums[nums[fast]];
    }while(slow != fast);

    // step 2 find the point of cycle

    fast = nums[0];

    while( slow != fast){
        fast = nums[fast];
        slow = nums[slow];
    }

    return slow;
    }
};