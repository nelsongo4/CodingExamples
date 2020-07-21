#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(string a){
    if(a.length() <= 1){
        return(true);
    }
    if(a.substr(0,1)!=a.substr(a.length()-1,1)){
        return(false);
    }
    else{
        return(is_palindrome(a.substr(1,a.length()-2)));
    }
}

int main()
{
    string s = "Mississippi";
    if(is_palindrome(s)){
        cout << s << " is a palindrome" << endl; 
    }
    else{
       cout << s << " is not a palindrome" << endl;         
    }
    
    s = "rotor";
    if(is_palindrome(s)){
        cout << s << " is a palindrome" << endl; 
    }
    else{
       cout << s << " is not a palindrome" << endl;         
    }
  
    
}