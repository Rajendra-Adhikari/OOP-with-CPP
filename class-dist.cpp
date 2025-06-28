//make class distance with  data member  to convert inches to feet and store distance
#include<iostream>
using namespace std;
class dist{
    public:
      int inches;
      int feet;
      void store(int i,int f){
        feet = i/12+f;
       inches=i%12;
      }
    void display (){
        cout<<feet<<"\'"<<inches<<"\""<<endl;
    }
};
int main(){
     dist d1;
      
    int i,f;
     cout<<"enter feet and inches"<<endl;
    cin>>f>>i;
    d1.store(i,f);
    d1.display();
    return 0;
    
}
