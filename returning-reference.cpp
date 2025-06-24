//returning by reference 
#include<iostream>
using namespace std;
int mul;
int & mult (int x,int y){//using returning by reference
     mul=x*y;
    return mul;
}
int main(){
    int a,b;
    cout<<"enter any two number:";
    cin>>a>>b;
   int &multiplication= mult(a,b);//reference variable
    cout<<"multiplication a*b is"<<multiplication<<endl;
    mult(a,b)=18;
    cout<<"value after change in cor reference"<<mul;//output 18 because in address of mul 18 initialize
}
