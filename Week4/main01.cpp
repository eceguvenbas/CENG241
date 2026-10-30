#include <iostream>
using namespace std;

class Rectangle {
    int width;
    int height;

    public:
    Rectangle(int w, int h): width(w),height(h) {
    }
    int area() {return width * height;}
};

int main() {
    Rectangle r(10, 5);
    cout << "Area: " << r.area() << endl;
    
    return 0;
}
