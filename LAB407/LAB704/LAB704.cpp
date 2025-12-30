#include <iostream>
using namespace std;

int main() {
    int arr[] = { 10, 20, 30, 40 };
    int* p = arr;

    // TODO
    cout << *p << endl;
    cout << *(p + 1) << endl;
	cout << *(p + 2) << endl;
    cout << *(p + 3) << endl;
    return 0;
}
