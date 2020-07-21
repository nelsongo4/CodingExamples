#include <iostream>
using namespace std;

void print_arr(double a[], int sz_a){
    for(int i = 0; i < sz_a; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void smooth(double values[], int size){
    double avg = 0;
    double old_avg = (values[0] + values[1]) / 2; // at start old_avg
    
    for(int i=1; i < size-1; i++){
        avg=(values[i-1] + values[i] + values[i+1]) / 3; // use value[i -1] to compute avg
        values[i-1]=old_avg; // assign value[i - 1] to old_avg
        old_avg = avg; // move 
    }
    values[size-1] = (values[size-2] + values[size-1])/2; // at the end last value is simply the average of previous two
    values[size-2] = old_avg;
}

int main()
{
    double arr[7]={1, 2, 3, 1, 4, 2, 1};
    int sz_arr = 7;
    cout << "Original array: ";
    print_arr(arr, sz_arr);
    
    smooth(arr, sz_arr);
    
    cout << "Smoothed array: ";
    print_arr(arr, sz_arr);
    return 0;
}