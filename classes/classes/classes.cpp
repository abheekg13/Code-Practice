// classes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class testParentClass {

public:
	int* a;
	int b;
	char c;
	string s;
	int x;
	int y;
	int z;

	testParentClass() {
		x = 3;
		y = 6;
		z = x + y;
		}

	int k;
	testParentClass(int i, int j) {
		k = pow(i,j);
	}
};

int main()
{
	testParentClass *t = new testParentClass;

	t->b = 333;
	t->a = &t->b;
	t->c = 'H';
	t->s = "This is how it's done";

	cout << t->x << endl;
	cout << t->y << endl;
	cout << t->z << endl;

	cout << t->a << endl;
	cout << t->b << endl;
	cout << t->c << endl;
	cout << t->s << endl;


	testParentClass *t2 = new testParentClass(4, 2);
	cout << t2->k << endl;

	testParentClass t3;
	cout << t3.z << endl;

	testParentClass t4(4,2);
	cout << t4.k << endl;

    return 0;
}

