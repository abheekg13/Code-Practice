// InheritanceExp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

using namespace std;

class Base {
public:
	Base() {
		cout << "Constucting base" << endl;
	}

	~Base() {
		cout << "Destructing base" << endl;
	}
};

class Child : public Base {
public:
	Child() {
		cout << "Constructing child" << endl;
	}

	~Child() {
		cout << "Destructing child" << endl;
	}
};


int main()
{
	//Base *b = new Base;
	//Child *c = new Child;
	//Base *bc = new Child;

	//Base b;
	Child c;

	//delete b;
	//delete c;
	//delete bc;

    return 0;
}

