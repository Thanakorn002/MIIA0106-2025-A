#include <iostream>
#include <string>
using namespace std;
struct Phone {
	string home;
	string mobile;
};
struct Parent {
	string name;
	string relationship;
	Phone contact;
};
struct Student {
	string id;
	string nickname;
	string lineID;
	Phone myContact;
	Parent myParent;
};
void inputStudent(Student student) {
	cout << "Enter Student Information\n";
	cout << "ID: ";
	cin >> student.id;
	cout << "Nickname: ";
	cin >> student.nickname;
	cout << "Line ID: ";
	cin >> student.lineID;
	cout << "Parent Name: ";
	cin >> student.myParent.name;
	cout << "Parent Relationship: ";
	cin >> student.myParent.relationship;
	cout << "Parent Phone (Home): ";
	cin >> student.myParent.contact.home;
	cout << "Parent Phone (Mobile): ";
	cin >> student.myParent.contact.mobile;
	cout << "Student Phone (Home): ";
	cin >> student.myContact.home;
	cout << "Student Phone (Mobile): ";
	cin >> student.myContact.mobile;
}

void printStudent(const Student student) {
	cout << "\n===== Student Information =====\n";
	cout << "ID : " << student.id << endl;
	cout << "Nickname : " << student.nickname << endl;
	cout << "Line ID : " << student.lineID << endl;
	cout << "Parent : " << student.myParent.name << ", " << student.myParent.relationship << endl;
	cout << "Parent Phone : Home " << student.myParent.contact.home << ", Mobile " <<
		student.myParent.contact.mobile << endl;
	cout << "Student Phone : Home " << student.myContact.home << ", Mobile " << student.myContact.mobile
		<< endl;
}
int main() {
	Student student;
	inputStudent(student);
	printStudent(student);
	return 0;
}