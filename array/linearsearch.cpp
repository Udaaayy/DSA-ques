//linear search //
#include<iostream>
using namespace std;
int linearsearch(int arr[],int sz ,int target )
  {
    for (int i =0; i<sz;i++){
        if (arr[i]==target)
        {
            return i;
        }
        
    }
      return -1;
  }

int main (){
    int arr[]={1,2,4,5,6,7,9};
    int sz = 7;
  int  target=9;
  cout<< linearsearch(arr,sz,target)<<endl;
return 0;
}