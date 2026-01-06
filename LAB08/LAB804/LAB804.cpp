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

// TODO: swap เขียนเอง
void swapStudent(Student& a, Student& b) {
    // TODO
	Student temp = a;
	a = b;
	b = temp;
}

// TODO: sort เขียนเอง (Bubble sort)
void sortByID(Student students[], int size) {
    // TODO
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(students[j].id > students[j + 1].id) {
                swapStudent(students[j], students[j + 1]);
            }
        }
	}
}

void printStudents(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        // TODO: cout << students[i]...
		cout << "Student " << (i + 1) << ":\n";
		cout << "Name: " << students[i].name << "\n";
		cout << "ID: " << students[i].id << "\n";
		cout << "Line ID: " << students[i].lineid << "\n";
		cout << "Phone: " << students[i].phone << "\n";

        cout << "----------------------\n";
    }
}
int main() {
    const int SIZE = 5;
    Student students[SIZE];

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
    sortByID(students, SIZE);
    cout << "\n===== Student List (Sorted by ID) =====\n";
    printStudents(students, SIZE);

    return 0;
}
