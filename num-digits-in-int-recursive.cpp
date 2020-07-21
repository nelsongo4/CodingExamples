#include <iostream>
using namespace std;

int num_digits(int n){
    if(n < 10){
        return 1;
    }
    return(1 + num_digits(n/10));
}

int main()
{
    int n = 0;
    cout << "Enter integer n (>=0): ";
    cin >> n;
    cout << "Number of digits in n = " << num_digits(n) << endl;
}