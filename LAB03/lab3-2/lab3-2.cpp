// lab3-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string studentNumber;
    string studentName;
    int gradeScore;

    cout << "Enter student number: " << endl;
    cin >> studentNumber;

    cin.ignore();

    cout << "Enter student name: " << endl;
    getline(cin, studentName);

    cout << "Enter grade score: ";
    cin >> gradeScore;

    if (cin.fail())
    {
        cout << "wrong input" << endl;
        return 0;
    }

    cout << "\nStudent Name: " << studentName << endl;
    cout << "Student Number: " << studentNumber << endl;
    cout << "Grade Score: " << gradeScore << endl;

    if (gradeScore < 0 || gradeScore > 100)
    {
        cout << "Grade : wrong input" << endl;
    }
    else if (gradeScore >= 90)
    {
        cout << "Grade : A" << endl;
    }
    else if (gradeScore >= 80)
    {
        cout << "Grade : B" << endl;
    }
    else if (gradeScore >= 70)
    {
        cout << "Grade : C" << endl;
    }
    else if (gradeScore >= 60)
    {
        cout << "Grade : D" << endl;
    }
    else
    {
        cout << "Grade : F" << endl;
    }

    return 0;
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
