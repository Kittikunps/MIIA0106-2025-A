// lab7-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


int main() {
    int score = 50;
    int* ptr = &score;

    // TODO
	cout << score;
	cout << "\n" << *ptr;

	cout << "\nAddress of score " << &score;
	cout << "\nValue of pointer " << ptr;
	cout << "\nAddress pointer " << &ptr;

    return 0;
}