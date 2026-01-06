
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

// TODO: เขียนฟังก์ชันนี้
void printStudent(Student s) {
    // TODO
	cout << "Name: " << s.name << "\n";
	cout << "ID: " << s.id << "\n";
	cout << "Line ID: " << s.lineid << "\n";
	cout << "Phone: " << s.phone << "\n";
}

int main() {
    Student s1;

    cout << "=== Input Student 1 ===\n";
    // TODO: cin >> ...
	cin >> s1.name;
	cin >> s1.id;   
	cin >> s1.lineid;
	cin >> s1.phone;

    cout << "\n=== Output (from function) ===\n";
    // TODO: เรียก printStudent
	printStudent(s1);

    return 0;
}

