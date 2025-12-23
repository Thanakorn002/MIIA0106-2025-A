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
    const int N = 3; 
    const int M = 4; 	

    string name[N], id[N];
    double score[N][M];
    double total[N] = { 0 };
    char grade[N];
    for (int i = 0; i < N; i++) {
        cout << "Enter student " << i + 1 << " name : ";
        getline(cin, name[i]);

        cout << "Enter student " << i + 1 << " id : ";
        cin >> id[i];
        total[i] = 0.0;
        for (int j = 0; j < M; j++) {
            cout << "Enter student " << i + 1 << " score" << j + 1 << " : ";
            cin >> score[i][j];
            total[i] += score[i][j]/4;
        }
        calculateGrade(total[i], grade[i]);
    }

    for (int i = 0; i < N; i++) {
        cout << "\nStudent " << i + 1 << " Information :";
        displayStudentInfo(name[i], id[i], total[i], grade[i]);
    }

    return 0;
}