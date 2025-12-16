#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int max0fThree(int a, int b, int c)
{
	if( a >= b && a >= c)
		return a;
	else if(b >= a && b >= c)
		return b;
	else
		return c;
}
int main()
{
	int a, b, c;

	cout << "Enter three A: ";
	cin >> a;
	cout << "Enter three B: ";
	cin >> b;
	cout << "Enter three C: ";
	cin >> c;

	int max = max0fThree(a, b, c);
	cout << "Max = " << max << endl;
	cin.clear(); cin.ignore(INT_MAX, '\n');
	return 0;
}
