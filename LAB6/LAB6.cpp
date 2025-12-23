#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void calculateGrade(double score, char &grade)
{
    if (score >= 80)
        grade = 'A';
    else if (score >= 70)
        grade = 'B';
    else if (score >= 60)
        grade = 'C';
    else if (score >= 50)
        grade = 'D';
    else
        grade = 'F';
}
void displayStudentInfo(const string &name, const string &id, double score, char grade)
{
    cout << fixed << setprecision(2);
    cout << "\nStudent Name : " << name << endl;
    cout << "Student ID : " << id << endl;
    cout << "Score : " << score << endl;
    cout << "Grade : " << grade << endl;
}   
int main()
{
    string name, id;
    double score;
    char grade;

	cout << "Enter name : ";
	getline(cin, name);
	cout << "Enter id : ";
	cin >> id;
	cout << "Enter score : ";
	cin >> score;
	calculateGrade(score, grade);
	displayStudentInfo(name, id, score, grade);
    return 0;   
	cin.ignore();
}
//Expected Output(ตัวอย่าง) :
//    Enter name : Somchai Jaidee         
//    Enter id : 65123456
//    Enter score : 78
//  
//    Student Name : Somchai Jaidee
//    Student ID : 65123456
//    Score : 78.00
//    Grade : C
