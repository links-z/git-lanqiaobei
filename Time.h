#pragma once
#include<iostream>
using namespace std;
class Time
{
private:
	int hour, minute, second;
public:
	Time(int hour=0,int min=0,int sec=0);
	~Time();
	static void getTime();
	void show();

	friend ostream& operator <<(ostream&, Time&);
	friend istream& operator >>(ostream&, Time&);
};


