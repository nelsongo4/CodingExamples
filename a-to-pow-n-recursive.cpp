#include <iostream>
using namespace std;

int a_to_pow_n(int a, int n){
    if(n == 0){
        return 1;
    }
    return(a*a_to_pow_n(a, n -1));
}

int main()
{
    int a = 0;
    int n = 0;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter n (>=0): ";
    cin >> n;
    cout << "a to-the-power n = " << a_to_pow_n(a, n) << endl;
}