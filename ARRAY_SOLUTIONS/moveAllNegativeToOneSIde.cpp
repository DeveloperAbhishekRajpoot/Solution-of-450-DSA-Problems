// solved using two pointer approch 

#include<iostream>
#include<vector>
using namespace std;

void moveNegativesToOneSide(vector<int> &arr){
    int n = arr.size();
    int i = 0, j = 0;

    while( i < n){
        if( arr[i] < 0 ){
            swap(arr[i] , arr[j]);
            i++; j++;
        }
        else{
            i++;
        }
    }
}

int main(){
    vector<int> arr = {-12,3,-4,6,5,3,5,-5,-10,-3,2};
    moveNegativesToOneSide(arr);

    for( auto  it : arr){
        cout<<it<<" ";
    }
    return 0;
}