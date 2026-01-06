#include <iostream>
#include <string>
using namespace std;

struct Address {
    int number;
    string road;
    string district;
    string province;
    // TODO: (ถ้าต้องการเพิ่ม) เช่น postcode[6]
};

struct Phone {
    string home;
    string mobile;
};

struct Student {
    string id;
    string name;
    string surname;
    // TODO:
	Address addr;
    Phone tel;
};

int main() {
    Student s1;

    // TODO 3) รับค่าข้อมูลนักศึกษา 1 คน (รวมที่อยู่ + โทรศัพท์)
    cout << "Enter Student Information:\n";
    cout << "ID: "; cin >> s1.id;
    cout << "Name: "; cin >> s1.name;
    cout << "Surname: "; cin >> s1.surname;
	cout << endl;
	cout << "===== Address Information =====\n";
    cout << "Address - House Number: ";
    // TODO 3) cin >> 
	cin >> s1.addr.number;

    cout << "Address - Road: ";
    // TODO 3) cin >> 
	cin >> s1.addr.road;

    cout << "Address - District: ";
    // TODO 3) cin >> 
	cin >> s1.addr.district;

    cout << "Address - Province:"; 
    // TODO 3) cin >>
	cin >> s1.addr.province;

    cout << "Phone - Home: ";
    // TODO 3) cin >> 
	cin >> s1.tel.home;

    cout << "Phone - Mobile: ";
    // TODO 3) cin >> 
	cin >> s1.tel.mobile;

    cout << "\n===== Output =====\n";
    //// TODO 4): แสดงผลข้อมูลทั้งหมด (รวม address และ phone)
	cout << "ID: " << s1.id << "\n";
	cout << "Name: " << s1.name << "\n";
	cout << "Surname: " << s1.surname << "\n";
	cout << "Address: " << s1.addr.number <<"\n ";
	cout << "Address - Road: " << s1.addr.road << "\n ";
	cout <<"Address - District: " << s1.addr.district << "\n ";
	cout <<"Address - Province: " << s1.addr.province << "\n";
	cout << "Phone - Home: " << s1.tel.home << "\n";
	cout << "Phone - Mobile: " << s1.tel.mobile << "\n";
    return 0;
}
