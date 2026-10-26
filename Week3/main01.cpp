#include <iostream>
using namespace std;

class example{
private:
       static int newValue = 100;
       static double newDouble = 200.5;

public:
    void change(int*& p, double* q){
        p = &newValue;     
        q = &newDouble;    
    }
};

int main() {
    int x = 10;
    double y = 20.5;

    int *a = &x;
    double *b = &y;

    example obj;
    obj.change(a,b);

    cout << *a << endl;  // 100
    cout << *b << endl;  // 20.5

    return 0;
}
