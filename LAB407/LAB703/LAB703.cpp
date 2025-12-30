#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int* p = &a;
	*p = 100;
    // TODO
	cout << *p << endl;
    cout << "a = " << a << endl;
    return 0;
}
