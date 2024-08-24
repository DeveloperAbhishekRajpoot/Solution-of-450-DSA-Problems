/*Tournament Method. 
   The idea is to pair elements and compare them against each other,
   reducing the number of overall comparisons.:
   Nmber of comparision = approximately  3n/2*/


#include<iostream>
using namespace std;
void findMinMax( int arr[] , int n , int &mini , int &maxi){
    
     int i ; // from this index i will start traversing 
     
    if( n%2 == 0){   // if number of elements is even 
        if( arr[0] > arr[1]){
            mini = arr[1];
            maxi = arr[0];
        }
        else{
            mini = arr[0];
            maxi = arr[1];
        }
        i = 2;
    }
    else {   // if the number of elements is odd
        mini = maxi = arr[0];
        i = 1;
    }

    while( i<n){
        if(arr[i] > arr[i+1]){
            maxi = max(arr[i] , maxi);
            mini = min( arr[i+1] , mini);
        }
        else{
            maxi = max(arr[i + 1] , maxi);
            mini = min( arr[i] , mini);
        }
        i+=2;
    }
}
int main( ){
    
    int arr[10] = {7, 12, 3, 19, 5, 21, 8, 14, 6, 10};

    int mini , maxi ;
    findMinMax( arr , 10 , mini , maxi);
    
    cout<<"MINI IS :"<<mini<<endl<<"MAXI IS :"<<maxi<<endl;
   
    return 0;
}