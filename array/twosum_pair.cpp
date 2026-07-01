#include<iostream>
#include<vector>
using namespace std ;
//pair of two sum in an array//
vector<int>pairsum(vector<int>nums, int target){
         vector<int>ans;
  int n = nums.size();
  int i=0, j = n-1;
  while(i<j){
   int pairsum =nums[i]+nums[j];
   if(pairsum > target){
    j--;
   } else if(pairsum<target){
        i++;
   } else {
    ans.push_back(i);
    ans.push_back(j);
      return ans;
   }
   
  }
  return ans;
}



int main(){
    vector<int>nums={2,5,7,11,25};
    int target=18;
 vector<int> ans = pairsum(nums,target);
 cout<<ans[0] << ","<< ans[1]<<endl;

    return 0;
}