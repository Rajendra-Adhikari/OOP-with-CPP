/*Function overloading means creating multiple functions with the 
same name but different parameters (type, number, or order). 
It allows a classto have more than one function with the
 same name as long as their signatures are different.*/
#include<iostream>
using namespace std;

class Print {
public:
    void show() {
        cout << "No arguments" << endl;
    }

    void show(int x) {
        cout << "Integer: " << x << endl;
    }

    void show(double y) {
        cout << "Double: " << y << endl;
    }

    void show(int x, double y) {
        cout << "Integer and Double: " << x << ", " << y << endl;
    }
};

int main() {
    Print obj;
    obj.show();
    obj.show(10);
    obj.show(3.14);
    obj.show(5, 6.28);

    return 0;
}
