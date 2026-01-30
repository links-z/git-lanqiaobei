#pragma once
#include<iostream>
using namespace std;
class point
{
private:
	int x;
	int y;
public:
	point(int i = 0, int j = 0);
	~point();
	point(point& p);
	friend point move(point& q);
	int getx();
	int gety();
};


