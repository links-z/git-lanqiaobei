#include "Time.h"
#include<iostream>
using namespace std;
Time::Time(int hour, int min, int sec) :hour(hour), minute(min), second(sec) {
	cout << "Time constructor" << endl;
}
Time::~Time() { cout << "Time destructor" << endl; }
void Time::getTime() {
	
}
void Time::show() {
	cout << "hour=" << hour << endl << "minute=" << minute << endl << "second=" << second << endl;
}
ostream& operator <<(ostream& output, Time& t) {
	cout << t.hour << endl << t.minute << endl << t.second << endl;
	return output;
}
istream& operator >>(istream& input, Time& t) {
	return input;
}