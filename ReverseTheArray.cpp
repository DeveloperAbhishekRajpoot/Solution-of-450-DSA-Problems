// INTUTION => i will swao the fist val with the last one and move forward the front pointer and backbard the rear pointer .

/* Time complexity  => O(n)
   Space Complexity => O(1) 
*/

#include<iostream> 
using namespace std;

// function to reverse an Array in (In-Place) with constant extra space 

void reverseArray( int arr[] , int size ){
  if( size == 0)
    return ;
  int front = 0 , rear = size - 1;
  while( front < rear ){
    swap(arr[front] , arr[rear]);
    front++ ; rear-- ;
  }
  
}
int main(){
  int arr[8] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 };
  reverseArray( arr , 8);
  cout<<" The arry after reversal "<<endl;
  for( int i = 0 ; i < 8 ; i++ ){
    cout<<arr[i]<<" ";
  } 
  return 0;
}
