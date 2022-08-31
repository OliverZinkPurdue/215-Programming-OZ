// Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
	float A;
	float B;
	float X;

	cout << " Hello, My name is Oliver and we're gonna solve: Ax+B=0" << endl;

	cout << "please enter a value for A: ";
	cin >> A; 

	cout << "please enter a value for B: ";
	cin >> B;

	X = -(B)/A ;
		cout << "and the answer is..." << endl;

		cout << "x=" << X << endl;
}

