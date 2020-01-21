//============================================================================
// Name        : TestCpp.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This Software belongs to me.
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Test.h"

using namespace std;

int main() {

	forresil::Test t;
	t.setNumber(22);
	cout << "Hello, add(22,22):  " << t.add(t.getNumber(), t.getNumber()) << endl;

	return 0;
}
