// TODO 1) เติม field และ method ใน class Student 
// TODO 2) เขียนฟังก์ชัน printStudent(Student s) 
// TODO 3) เรียกใช้งาน printStudent จาก main
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	// TODO
	string id;
	string nickname;
	string lineId;
	string phone;
};
void printStudent(Student s)
{
	// TODO: แสดงข้อมูลจาก object s
	cout << "ID: " << s.id << endl;
	cout << "Nickname: " << s.nickname << endl;
	cout << "Line ID: " << s.lineId << endl;
	cout << "Phone: " << s.phone << endl;
}
void inputStudent(Student &s)
{
	cout << "Enter ID: ";
	cin >> s.id;
	cout << "Enter Nickname: ";
	cin >> s.nickname;
	cout << "Enter Line ID: ";
	cin >> s.lineId;
	cout << "Enter Phone: ";
	cin >> s.phone;
}

int main()
{
	Student s1;
	cout << "=== Input Student 1 ===\n";
	 inputStudent(s1);

	cout << "\n=== Output (from function) ===\n";
	 printStudent(s1);

	return 0;
}
