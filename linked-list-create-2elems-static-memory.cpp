#include <iostream>
using namespace std;

struct lst_elem{ // create new type
    string val = "";
    lst_elem* next = NULL;
};

int main()
{
    lst_elem x; // create variable for the first list element
    x.val = "Alice"; // assign name Alice to the val field of the first variable
    
    lst_elem y; // create variable for the second list element
    y.val = "Bob"; // assign name Bob to the val filed of the secodn variable
    
    x.next = &y; // Connect next field of x to point to y, using its address &y
    
    // test what we got via cout
    cout << "x.val = " << x.val << endl;
    cout << "x.next = " << x.next << endl;
    cout << "Address of x, i.e., &x = " << &x << endl;

    cout << "y.val = " << y.val << endl;
    cout << "y.next = " << y.next << endl;
    cout << "Address of y, i.e., &y = " << &y << endl;

    return 0;
}