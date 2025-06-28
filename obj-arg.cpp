//object as function argument means passing an object of class to function

#include<iostream>
using namespace std;

class Student {
public:
    int age;
    void display() {
        cout << "Age: " << age << endl;
    }
};

void show(Student s) {  // passed by value
    s.age = 25;         // change won't affect original
    s.display();
}

int main() {
    Student s1;
    s1.age = 20;
    show(s1);
    s1.display();  // original remains unchanged
    return 0;
}
