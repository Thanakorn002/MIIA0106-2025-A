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
    const int N = 5;
    string name[N], id[N];
    double score[N];
    char grade[N];

    for (int i = 0; i < N; i++) {
        cout << "Enter student " << i + 1 << " name : ";
        getline(cin >> ws, name[i]);
        cout << "Enter student " << i + 1 << " id : ";
        cin >> id[i];
        cout << "Enter student " << i + 1 << " score : ";
        cin >> score[i];
        calculateGrade(score[i], grade[i]);
    }

    for (int i = 0; i < N; i++) {
        cout << "\nStudent " << i + 1 << " Information ";
        displayStudentInfo(name[i], id[i], score[i], grade[i]);
    }

    return 0;
}
//Expected Output(ตัวอย่าง) :
//    Enter student 1 name : A
//    Enter student 1 id : 1001
//    Enter student 1 score : 90
//    ...
//    Student 1 Information :
//    Student Name : A
//    Student ID : 1001
//    Score : 90.00
//    Grade : A
//    ...
