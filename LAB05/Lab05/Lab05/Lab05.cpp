#include <iostream>
#include <string>

using namespace std;

/// circle area calculator

double CircleArea(double x)
{
 const double pi = 3.14159;
	double area = pi * x * x;
	return area;
}

double SquareArea(double b, double a)
{
	double square = a * b;
	return square;
}

int main()
{
	 const double pi = 3.14159;
	 double radius;

	 double height;
	 double weight;

	 cout << "circle radius : ";
	 cin >> radius;

	 cout << "height of square: ";
	 cin >> height;
	 cout << "weight of square: ";
	 cin >> weight;

	 double area = CircleArea(radius);
	 cout << "\nCircleArea : " << area << endl;

	 double square = SquareArea(height, weight);
	 cout << "RectangleArea : " << square << endl;
	 
	 return 0;
}