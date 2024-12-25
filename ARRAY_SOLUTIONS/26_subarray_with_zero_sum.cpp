 // ifthe prefix sum repets itself then there is a subarray with sum 0 it is an guranteed fact
 
 class solution{
  public:
    bool subArrayExists(vector<int>& arr) {
        for( int i = 0; i<arr.size(); i++){
            int sum = 0;
            for( int j = i; j<arr.size(); j++){
                sum += arr[j];
                if( sum == 0){
                    return true;
                }
            }
        }
        return false;
    }
};