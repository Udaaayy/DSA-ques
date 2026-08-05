#include<iostream>
#include<string>
using namespace std;
void reversestring( string& s){
     int st=0 , end =s.size()-1;

        while(st < end){
            swap(s[st++] , s[end--] );
        }
}
int main(){

std::string userInput;

    std::cout << "Enter a string: ";
    // Use std::getline to capture full lines including spaces
    std::getline(std::cin, userInput);
;
    
    reversestring(userInput);
cout << userInput;

    return 0;
}


//method 2
// reverse(str.begin(),str.end());
// cout<< str ;