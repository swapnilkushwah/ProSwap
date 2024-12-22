#include<iostream>
using namespace std;


// made my raghvendra
class Base{
      public:

     virtual ~Base(){
             cout<<"this is Base class Destructor"<<endl;
      }       
};

class Derived:public Base{
             public:
             ~Derived(){
             cout<<"this is Derived class"<<endl;
             }
};

int main(){
        Base *p=new Derived;
        delete p;
        return 0;     
}