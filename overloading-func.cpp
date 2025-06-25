/*Function Overloading means creating multiple functions with the same
 name but different parameters (type or number)*/
#include<iostream>
using namespace std;
 void display(int l ,int b){
    cout<<"area of  rectangle is"<<endl<<l*b;
 }
 void display(int l){
    cout<<endl<<"area of square is"<<endl<<l*l;
 }
 int main(){
    int a ,b;
    cout<<"enter value of a and b (same if it is square)";
    cin>>a>>b;
    display(a,b);
    display(a);
    return 0;
 }

