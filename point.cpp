#include "point.h"
#include<iostream>
using namespace std;
point::point(int i, int j) {
	this->x = i;
	this->y = j;
	cout << "calling the constructor function" << endl;
}
point::point(point& q) {
	this->x = q.x;
	this->y = q.y;
	cout << "calling the copy_constructor function" << endl;
}
point::~point() {
	cout << "calling the destructor function" << endl;
}
point move(point& q) {
	cout << "OK" << endl;
	int i, j;
	i = q.x + 10;
	j = q.y + 20;
	point r(i, j);
	return r;
}
int point::getx() {
	return (this->x);
}
int point::gety() {
	return (this->y);
}