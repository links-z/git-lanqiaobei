#include "C.h"
#include<iostream>
using namespace std;
C::C() { cout << "Cs cons." << endl; }
C::~C() { cout << "Cs des." << endl; }
void C::f() { cout << "Cs f()" << endl; }