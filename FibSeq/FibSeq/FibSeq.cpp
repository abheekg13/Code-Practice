#include "stdafx.h"
#include <iostream>

using namespace std;

void FibSeq(int left_to_print) {
	int x = 0;
	int y = 1;

	cout << x << " " << y << " ";

	left_to_print = left_to_print - 2;
	while (left_to_print != 0) {
		cout << x + y << " ";

		int temp = 0;
		temp = x;
		x = y;
		y = temp + y;
		left_to_print--;
	}
}

int main()
{
	int maxSeqNum;
	cout << "Print sequence upto length: ";
	cin >> maxSeqNum;
	FibSeq(maxSeqNum);
	return 0;
}
