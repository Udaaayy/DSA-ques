#include<iostream>
using namespace std;

 int dectobinary( int decnum){
   int ans=0;
   int pow=1;
           while (decnum > 0)
           {
             int remainder = decnum%2;
             decnum /= 2 ;
             ans += (remainder*pow) ;
             pow*=10;
            }
            return ans;
 }

    int main(){
        int decnum = 42;
         cout<< dectobinary (decnum) << endl;
        
           


    return 0;
}