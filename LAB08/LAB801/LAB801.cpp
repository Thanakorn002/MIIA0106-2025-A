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
    Student s1; // ตัวแปรเดี่ยวของ struct
    cout << "=== Input Student 1 ===\n";
    // TODO: cin >> ...
	cin >> s1.name;
	cin >> s1.id;
	cin >> s1.lineid;
	cin >> s1.phone;
    cout << "\n=== Output Student 1 ===\n";
    // TODO: cout << ...
	cout << "Name: " << s1.name << "\n";
	cout << "ID: " << s1.id << "\n";
	cout << "Line ID: " << s1.lineid << "\n";
	cout << "Phone: " << s1.phone << "\n";

    return 0;
}
