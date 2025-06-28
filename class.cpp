#include<iostream>
using namespace std;
class Student {
private:
    int roll;       // data member (private)
    string name;    // data member (private)
public:
     void setData(int r, string n) {
        roll = r;
        name = n;
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s1;
    s1.setData(101, "yogesh");
    s1.display();
    return 0;
}
