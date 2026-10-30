#include <iostream>
using namespace std;

class Point {
    int x, y;

    public:
    Point(int a=0, int b=0){
        x=a;
        y=b;}
    void display() {cout << "X: " << x << ", Y: " << y << endl;}

int main() {
    Point p(10, 20);
    p.display();
    
    Point p2;
    p2.display();
    
    Point p3(30);
    p3.display();
    /*
    Point p4(, 50);
    p4.display();
    */
    return 0;
}
