class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        int ans = arr[0];
        int n = arr.size();
        
        // solution 1 - O(n3)
        
       /* for( int i=0; i<n; i++){
            for(int k=0; k<n; k++){
                int temp = 1;
                for( int j = i; j<=k; j++){
                    temp *= arr[j];
                }
                ans = max(ans , temp);
            }
        } */
        
        // solution 2 - O(n2)
         
        /*
        for( int i=0; i<n; i++){
            
                int temp = 1;
                for( int j = i; j<n; j++){
                    temp *= arr[j];
                    ans = max(ans , temp);
                }
        }
        */
        
        //solution 3 - O(n) - using the Kadan's Algorithm 
        
        int maxi = arr[0];
        int mini = arr[0];
        
        for( int i=1; i<n; i++){
            if( arr[i] < 0){
                swap(maxi , mini);
            }
            
            maxi = max(arr[i] , maxi*arr[i]);
            mini = min(arr[i] , mini*arr[i]);
            
            ans = max(ans , maxi);
        }
        return ans;
    }
};