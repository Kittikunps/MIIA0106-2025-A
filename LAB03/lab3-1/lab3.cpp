// lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int first_num;
    int second_num;

    cout << "Enter num1: ";
    cin >> first_num;
    cout << "Enter num2: ";
    cin >> second_num;

    cout << "Sum: " << first_num + second_num << endl;
    cout << "Diff: " << first_num - second_num << endl;
    cout << "Product: " << first_num * second_num << endl;
	cout << "Quotient: " << first_num / second_num << endl;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
