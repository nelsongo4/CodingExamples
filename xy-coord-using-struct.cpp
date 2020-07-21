#include <iostream>
#include <cmath>
using namespace std;

struct point{
    double x = 0;
    double y = 0;
};

double dist(point a, point b){
    double dis = sqrt(pow((a.x - b.x),2) + pow((a.y - b.y), 2));
    return dis;
}

int main()
{
    point p1, p2;
    
    cout<<"Enter x and y coordinates of point-1: ";
    cin >> p1.x >> p1.y;
    cout<<"Enter x and y coordinates of point-2: ";
    cin >> p2.x >> p2.y;    

    double d = 0;
    d = dist(p1, p2);
    cout << "Distance between the two points is: " << d << endl;
}