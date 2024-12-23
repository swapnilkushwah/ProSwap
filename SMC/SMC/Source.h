#pragma once

class Demo
{
   int x;
   int y;

public:
 
 void setData(int x, int y);
 int getData();

};

// create the progream date month and year//

class Dates{
	
private:  

int day;
int month;
int year;

public:

void setdate(int day, int month, int year);
void display();

};

// Create the program using operator overloading

class Complex{
   private:

   int a;
   int b;

   public:

   void mydata(int x,int y);
   Complex operator+(const Complex &c);
   void showdata();
};




 