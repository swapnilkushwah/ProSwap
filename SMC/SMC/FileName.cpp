#include<iostream>
#include "Source.h"

using namespace std;
int main()
{
	Demo obj;
	obj.setData(10, 20);
	cout << obj.getData()<<endl;
	cout << "hello" << endl;

	Dates t;
        t.setdate(23,12,2024);
  	t.display();
}

