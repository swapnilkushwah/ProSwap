#include"Source.h"
#include<iostream>

using namespace std;

void Demo::setData(int x, int y)
{
	this->x = x;
	this->y = y;
}
Demo Demo::operator+(Demo &d)
{
  Demo temp;
  temp.x=this->x+d.x;
  temp.y=this->y+d.y;
  return temp;
}
void Demo::showdata()
{
  cout<<"x="<<x<<"y="<<y<<endl;
}

int Demo::getData()
{
	return x + y;
}

void Dates::setdate(int month,int day,int year){  
  this->month=month;
  this->day=day;
  this->year=year;
}


void Dates::display(){
cout<<"day = "<<day<<endl<<"month= "<<month<<endl<<"year = "<<year<<endl;
}
