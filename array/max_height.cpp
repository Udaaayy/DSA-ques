#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,8,6,2,5,4,8,3,9    };
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxwater=0;
    for (int i = 0; i < n ; i++)
    {
        for (int j = i+1 ; j < n ; j++)
        {
           int w= j-1;
           int ht= min(arr[i],arr[j]) ;
           int area=w*ht;
           maxwater=max(maxwater,area); 
        }
        
    }
    cout << "Max water: " << maxwater << endl;

    return 0;
}