#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void calculateGrade(double score, char& grade)
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
void displayStudentInfo(const string& name, const string& id, double score, char grade)
{
    cout << fixed << setprecision(2);
    cout << "\nStudent Name : " << name << endl;
    cout << "Student ID : " << id << endl;
    cout << "Score : " << score << endl;
    cout << "Grade : " << grade << endl;
}

int main()
{
    int size;
    cout << "Enter number of students: ";
    cin >> size;
    cin.ignore(); 

    string* name = new string[size];
    string* id = new string[size];
    double* score = new double[size];
    char* grade = new char[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter student " << i + 1 << " name : ";
        getline(cin, name[i]);
        cout << "Enter student " << i + 1 << " id : ";
        cin >> id[i];
        cout << "Enter student " << i + 1 << " score : ";
        cin >> score[i];
        cin.ignore(); 
        calculateGrade(score[i], grade[i]);
    }

    for (int i = 0; i < size; i++) {
        displayStudentInfo(name[i], id[i], score[i], grade[i]);
    }

    delete[] name;
    delete[] id;
    delete[] score;
    delete[] grade;

    return 0;
}
//Expected Output(ตัวอย่าง) :
//    Enter number of students : 2
//    Enter student 1 name : Tonnam
//    Enter student 1 id : 3001
//    Enter student 1 score : 55
//
//    Enter student 2 name : Mark
//    Enter student 2 id : 3002
//    Enter student 2 score : 88
//
//    Student Name : Tonnam
//    Student ID : 3001
//    Score : 55.00
//    Grade : F
//
//    Student Name : Mark
//    Student ID : 3002
//    Score : 88.00
//    Grade : B
