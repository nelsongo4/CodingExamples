#include <iostream>
#include <string>
using namespace std;

string reverse(string s){
    if(s.length() <= 1){
        return(s);
    }
    return(s.substr(s.length()-1, 1) + reverse(s.substr(0,s.length()-1)));
}

int main()
{
    string s = "Mississippi";
    cout << "Reverse of " << s << " is " << reverse(s) << endl;         
}