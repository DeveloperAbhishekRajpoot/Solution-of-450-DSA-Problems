class Solution {
  public:
    void rearrange(vector<int> &arr) {
        vector< int > pos;
        vector< int > neg;
        
        for( auto num : arr){
            if( num >= 0){
                pos.push_back( num );
            }
            else{
                neg.push_back(num);
            }
        }
        
        int p = pos.size(), n = neg.size();
        int i = 0 , j = 0 , k = 0;
        
        while( i < p && j < n ){
            arr[k++] = pos[i++];
            arr[k++] = neg[j++];
        }
        
        while( i < p){
            arr[k++] = pos[i++];
        }
        while( j < n){
            arr[k++] = neg[j++];
        }
    }
};