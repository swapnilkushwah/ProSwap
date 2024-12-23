#include<iostream>
#include "Source.h"
using namespace std;

int main(){
	 Demo obj;
	 obj.setData(10, 20);
	 cout << obj.getData()<<endl;
	 cout << "hello" << endl;

  // create the program data month year//
	 Dates t;
         t.setdate(23,12,2024);
  	 t.display();
cout<<"--------------------------------------------------------------------------------"<<endl;
 // Create the program using operator overloading
     
     	 Complex c1,c2, c3;

   	 c1.mydata(653,53);
   	 c2.mydata(999,32);
   	 c3=c1+c2;

   	 cout<<"c1";
   	 c1.showdata();

   	 cout<<"c2";
   	 c2.showdata();

   	 cout<<"c3=c1+c2";
   	 c3.showdata();

   	 return 0;

}

