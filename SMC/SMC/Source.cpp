#include"Source.h"
#include<iostream>
using namespace std;  

void Demo::setData(int x, int y)
{
	this->x = x;
	this->y = y;
}
int Demo::getData()
{
	return x + y;
}

// create the progream date month and year//

void Dates::setdate(int month,int day,int year){  
  this->month=month;
  this->day=day;
  this->year=year;
}

void Dates::display(){
cout<<"day = "<<day<<endl<<"month= "<<month<<endl<<"year = "<<year<<endl;
}

// Create the program using operator overloading


void Complex ::mydata(int x,int y){
  a=x;
  b=y;
}

Complex Complex::operator+(const complex &c){
       Complex temp;

       temp.a=this->a+c.a;
       temp.b=this->b+c.b;
       return temp;

}

void Complex::showdata(){
  cout<<" a= "<<a<<" b= "<<b<<endl;
}









