#pragma once

class Demo
{
   int x;
   int y;

public:
 
 void setData(int x, int y);
 Demo operator+(Demo &d);
 void showdata();
 int getData();

};


class Dates{
	
private:  

int day;
int month;
int year;

public:

void setdate(int day, int month, int year);
void display();

};
