#include<iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    // Constructor to initialize data
    Student(int r, string n) {
        roll = r;
        name = n;
    }

    // Member function to display data
    void display() {
        cout << "Student Info -> Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    // Object creation using constructor
    Student student1(102, "Raj");

    // Displaying data
    student1.display();

    return 0;
}
