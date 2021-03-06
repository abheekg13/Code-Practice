// pointersForever.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


void squareByPtr(int* numPtr) {
	*numPtr = *numPtr * *numPtr;
}


int main()
{
	int i = 2;
	int* ptr;		//the pointer
	int& x = i;		//the ref variable
	
	ptr = &i;
	int* p2 = ptr;

	cout << ptr << endl;
	cout << &i << endl;

	cout << x << endl;
	cout << *p2 << endl;
	cout << *(&i) << endl;

	squareByPtr(&i);
	cout << i << endl;
}

