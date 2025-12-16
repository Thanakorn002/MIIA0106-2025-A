#include <iostream>
#include <cmath>
using namespace std;

double circleArea(double radius) 
{
	double PI = 3.14159;
	double area = PI * radius * radius;
    return area;
}

double rectArea(double width, double height) {
    return width * height;
}

int main() {
    double radius, width, height;
    const double PI = 3.14159;
    cout << "Enter radius: ";
    cin >> radius;

    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;
	double area = circleArea(radius);
    cout << "Circle Area = " << circleArea(radius) << endl;
    cout << "Rectangle Area = " << rectArea(width, height) << endl;
    cin.clear(); cin.ignore(INT_MAX, '\n');

    return 0;
}
