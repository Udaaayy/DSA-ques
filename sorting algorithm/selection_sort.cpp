#include <iostream>
#include<math.h>
using namespace std;

void selectionsort(int arr[], int n){
 for (int i=0 ;i< n-1 ;i++){
 int smallestIDX = i;
 
    for(int j=i+1; j<n; j++ ){
     if(arr[j] < arr[smallestIDX]){
     smallestIDX =j;
    }
}
  swap ( arr[i],arr[smallestIDX]);
 }
}
 void printarr(int arr[],int n){
        for(int i=0; i<n ;i++){
            cout<< arr[i] << "";
        }
        cout<< endl;
    }
int main() {
    int n=5;
    int arr[] ={2,4,3,5,1};

selectionsort(arr ,n);
printarr(arr, n);
    
    return 0;
}