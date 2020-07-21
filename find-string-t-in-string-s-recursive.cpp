#include <iostream>
#include <string>
using namespace std;

bool find(string a, string b){
    if(a.length() < b.length()){
        return(false);
    }
    if(b== a.substr(0,b.length())){
        return(true);
    }
    else{
        return(find(a.substr(1,a.length()-1), b));
    }
}

int main()
{
    string s = "Mississippi";
    string t = "sip";
    if(find(s, t)){
        cout << t << " found in " << s << endl; 
    }
    else{
       cout << t << " not found in " << s << endl;         
    }
}