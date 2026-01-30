#include "A.h"
#include<iostream>
using namespace std;
A::A() {
	cout << "A cons." << endl;
}
A:: ~A() { cout << "As des." << endl; }
void A::f() { cout << "A s f()" << endl; }
void A::g() { f(); }