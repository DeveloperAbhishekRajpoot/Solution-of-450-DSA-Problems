// To check it run it on Geeks for Geeks

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        priority_queue< int > maxHeap;
        
        for( int i = 0 ; i < arr.size(); i++){
            if( maxHeap.size() < k){
                maxHeap.push(arr[i]);
            }
            else if(maxHeap.top() > arr[i]){
                maxHeap.pop();
                maxHeap.push(arr[i]);
            }
        }
        
        return maxHeap.top();
    }
};