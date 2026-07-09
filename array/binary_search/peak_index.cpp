// peak index with brute force
#include <iostream>
#include<vector>
using namespace std;
int peakindex(const vector<int>& arr){
   int end = arr.size()-1;
    
    for (int i = 1; i  < end ; ++i) {
        if (arr[i-1] < arr[i] && arr[i] > arr[i+1]) {
            return static_cast<int>(i);
        }
    }
    return -1;
}
int main() {
    vector<int> arr1 = {0,2,3,9,8,5,1};
    cout << peakindex(arr1) << endl;

    return 0;
}