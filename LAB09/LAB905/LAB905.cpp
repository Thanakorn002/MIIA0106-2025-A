// TODO 1) เติม field: id, nickname, height, weight 
// TODO 2) เขียน method input(), print(), calcBMI()
#include <iostream>
#include <string>
using namespace std;
class Student
{
public: // TODO
	string id;
	string nickname;
    int height;
    int weight; 

void input()
    {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Nickname: ";
        cin >> nickname;
        cout << "Enter height ID: ";
        cin >> height;
        cout << "Enter weight: ";
        cin >> weight;
    }

    // TODO: method print() แสดงข้อมูล
void print()
    {
        cout << "ID: " << id << endl;
        cout << "Nickname: " << nickname << endl;
        cout << "height: " << height << endl;
        cout << "weight: " << weight << endl;
    }
double calcBMI() 
{
	double h = height / 100.0; // แปลงความสูงเป็นเมตร
	return weight / (h * h);
}
};

int main()
{
	Student s1;
	cout << "=== Input Student ===\n";
	 s1.input();

	cout << "\n=== Student Info ===\n";
	 s1.print();
    cout << "BMI : " << s1.calcBMI() << endl;
	return 0;
}

