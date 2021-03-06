// FibRecurve.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int fibRecurve(int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	else
		return (fibRecurve(n - 1) + fibRecurve(n - 2));
}

int main()
{
	int print_seq_len;
	cout << "Print sequence upto length: ";
	cin >> print_seq_len;
	cout << endl;

	for (int i = print_seq_len; i >= 0; i--) {
		int temp = fibRecurve(i);
		cout << temp << " ";
	}
	
    return 0;
}