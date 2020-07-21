#include <iostream>
using namespace std;

struct lst_elem{ // create the new type
    string val = "";
    lst_elem* next = NULL;
};

main(){
    lst_elem a; // creates a new variable of this new type
    cout << "Printing a: " << "val = " << a.val << " next = " << a.next << endl;
    cout << "Enter a new value (string) to put into val element: ";
    cin >> a.val; // read a new string into the val field
    cout << "Printing a: " << "val = " << a.val << " next = " << a.next << endl;
    cout << "Printing a: " << "address = " << &a << endl;
    
    lst_elem b; // creates a new variable of this new type
    cout << "Printing b: " << "val = " << b.val << " next = " << b.next << endl;
    cout << "Enter a new value (string) to put into val element: ";
    cin >> b.val; // read a new string into the val field
    cout << "Printing b: " << "val = " << b.val << " next = " << b.next << endl;
    cout << "Printing b: " << "address = " << &b << endl;
    
    // assign the next element of second variable to point to the first variable
    cout << "Making a to the next of b" << endl;
    b.next = &a; // assign to the element next of variable b the address of variable address

    cout << "Printing b: " << "val = " << b.val << " next = " << b.next << endl;
}