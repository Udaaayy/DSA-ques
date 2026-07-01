#include<iostream>
using namespace std;
 //smallest number brute force method//
int main (){
    int n; 
 cout<<"size of arr= ";
 cin>>n;
  int arr[n];
  cout<<"enter "<< n << "numbers";
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  int smallest = arr[0];
  for (int i = 1; i < n; i++)
  {
    if (arr[i] < smallest)
    {
      smallest = arr[i];
    }
  }
  cout << "smallest number is " << smallest << endl; 
return 0;
}
