#include <iostream>
using namespace std;

struct lst_elem{ // create new type
    string val = "";
    lst_elem* next = NULL;
};

int main()
{
    lst_elem* start; // create variable for the first list element
    start = new lst_elem;
    cout << "Enter name: ";
    cin >> start->val; // read name and assign to the val field of the first variable
    
    lst_elem* tmp; // create variable for the next list element
    tmp = new lst_elem;
    cout << "Enter name: ";
    cin >> tmp->val ; // read name and assign to the val field of the next variable
    
    start->next = tmp; // Connect next field previous element to the new element
    
    // test what we got via cout
    cout << "start->val = " << start->val << endl;
    cout << "start->next = " << start->next << endl;
    cout << "Address of the first element, i.e., start = " << start << endl;
    
    cout << "start->next->val = " << start->next->val << endl;
    cout << "start->next->next = " << start->next->next << endl;
    cout << "Address of second element, i.e., tmp = " << tmp << endl;

    return 0;
}