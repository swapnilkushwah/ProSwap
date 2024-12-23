#include<iostream>
#include "Source.h"
using namespace std;

int main()
{
	Demo obj,obj2,obj3;
	obj.setData(10, 20);
	obj3=obj+obj2;
	obj3.showdata();
	cout << obj.getData()<<endl;
	cout << "hello" << endl;

	Dates t;
        t.setdate(23,12,2024);
  	t.display();
}

