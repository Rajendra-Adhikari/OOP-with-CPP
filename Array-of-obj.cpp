//Array of object 
#include<iostream>
using namespace std;

class Fighter{
 private:
  string name;
  int  damage;
  string skill;
  public:
   void set_fighter(string n="unknown",int d=0,string sk="unknown"){
    name=n;
    damage=d;
    skill=sk;
   }
   void attack(){
    cout<<name<<" gives damage "<<damage<<" with skill "<<skill<<endl;
   }
       
};
int main(){
    Fighter f[3];//array of object
    string name,skill;
    int damage;
   for(int i=0;i<3;i++){
       cout<<"enter the name skill and damage of fighter "<<i+1<<endl;
       cin>>name>>skill>>damage;
       f[i].set_fighter(name,damage,skill);//accessing data of object using array of object

    }
    f[0].attack();
    f[1].attack();
    return 0;
}