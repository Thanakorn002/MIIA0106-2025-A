#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO
    string name;
    string id;
    string lineid;
    string phone;
};

int main() {
    const int SIZE = 5;
    Student students[SIZE]; // Array ของ struct

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO: cin >> students[i]...
		cin >> students[i].name;
		cin >> students[i].id;
		cin >> students[i].lineid;
		cin >> students[i].phone;
        cout << endl;
    }

    // OUTPUT
    cout << "\n===== Student List =====\n";
    for (int i = 0; i < SIZE; i++) {
        // TODO: cout << students[i]...
		cout << "Student " << (i + 1) << ":\n";
		cout << "Name: " << students[i].name << "\n";
		cout << "ID: " << students[i].id << "\n";
		cout << "Line ID: " << students[i].lineid << "\n";
        cout << "----------------------\n";
    }

    return 0;
}
