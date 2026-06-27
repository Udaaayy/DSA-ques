#include<iostream>
#include <climits>
using namespace std;

int main(){
    int n=5;
  int arr [5]={7,9,6,3,55};

  int maxsum = INT_MIN;
   for (int st = 0; st < n ; st++)
   {
    int currsum=0;
    for (int end = 0; end < n ; end++)
    {
        currsum += arr[end];
        maxsum = max( currsum ,maxsum);
    }
   }
      cout<<" maximum of subarray = " << maxsum << endl;

    return 0;
}