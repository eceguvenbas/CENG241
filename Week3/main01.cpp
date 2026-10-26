#include <iostream>
using namespace std;

void example(int* &p, double *q) {
    int newValue = 100;
    p=new int(newValue);
    double newDouble = 200.5;
    q=&newDouble;
   
}

int main() {
    int x = 10;
    double y = 20.5;

    int *a = &x;
    double *b = &y;

    example(a, b);

    cout << *a << endl;  // 100
    cout << *b << endl;  // 20.5
    
    delete a;

    return 0;
}
