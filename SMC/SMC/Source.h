#pragma once
#include"Source.cpp"
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