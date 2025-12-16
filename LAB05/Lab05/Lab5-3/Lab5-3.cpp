// Lab5-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void swap(int& a, int& b)
{
	 int temp = a;
	 a = b;
	 b = temp;
}


int main()
{
	 int a = 10, b = 20;

	 cout << "Before swap: a = " << a << ", b = " << b << endl;
	 swap(a, b);
	 cout << "After swap: a = " << a << ", b = " << b << endl;

	 return 0;
}