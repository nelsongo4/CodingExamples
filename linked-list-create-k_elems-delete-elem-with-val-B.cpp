#include <iostream>
using namespace std;

struct lst_elem{ // create new type
    string val = "";
    lst_elem* next = NULL;
};

void walk_and_print_list(lst_elem* here){
    if(here == NULL){
        return;
    }
    cout << "List element value (from recursive function): " << here->val << endl;
    walk_and_print_list(here->next);
}

int main()
{
    int n = 0;
    cout << "Enter the numbers of names in your list: ";
    cin >> n;
    
    lst_elem* start; 
    start = new lst_elem; // create variable for the first list element
    
    cout << "Enter name: ";
    cin >> start->val; // read name and assign to the val field of the first variable
    
    lst_elem* last = start; // last stores the pointer to the last element
    // since we start with only one element, last initialized to the value start

    for(int i = 0; i< n-1; i++){ // one name has alredy been read, n-1 more to go
        lst_elem* tmp; 
        tmp = new lst_elem; // create variable for the next list element
        cout << "Enter name: ";
        cin >> tmp->val ; // read name and assign to the val field of the next variable
    
        last->next = tmp; // Connect next field previous element to the new element
        last = tmp; // now, tmp is the address of the last element
    }

// Move down the list from start to finish
// Perform whatever task you need to perform of each list element
// e.g., print the val, check if val matches what you are looking for,
// e.g., check if the val < the value you are looking for

    walk_and_print_list(start);
 
    // this version walks the list from the beginning, looking for element with val == "B"; then deletes that element
    // this version does NOT work if val B appears in the first list element - FIX THAT
    lst_elem* here = NULL;

    here = start; // start is the pointer to the first element, so walking starts there
    while(here != NULL){
        if(here->next == NULL) break;
        if(here->next->val == "B"){ // if the next element has value B
            // (2) this element must point to the next next element
            // (3) the next element can be deleted
            lst_elem* tmp = here->next;
            here->next = here->next->next; // (2)
            delete tmp; // (3)
        }
        here = here->next; // move to the next element
    }
    
    cout << "After deleting element with value B" << endl;
    walk_and_print_list(start);
    return 0;
}