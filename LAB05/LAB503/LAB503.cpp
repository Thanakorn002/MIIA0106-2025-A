#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void swap(int& A, int& B)
{
    int temp = A;
	A = B;
    B = temp;
}

int main()
{
    int x = 10, y = 20;
    cout << "Before: A = " << x << ", B = " << y << endl;
    swap(x, y);
    cout << "After: A = " << x << ", B = " << y << endl;
    cin.clear(); cin.ignore(INT_MAX, '\n');
    return 0;
}