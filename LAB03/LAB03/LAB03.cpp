#include <iostream>
#include <string>

using namespace std;

int main() {
	string name;
	string IDStudent;
	int score;

	cout << "NAME : ";
	cin >> name;
	cout << "IDSTUDENT : ";
	cin >> IDStudent;
	cout << "SCORE : ";
	cin >> score;

	if (!(cin >> score)) {
		cout << "Error" << endl;
		return 0;
	}
	cout << "--Grading Result--\n" << endl;	
	if (score < 0 || score > 100) {
		cout << "Error" << endl;
	}
	else {
		if (score >= 90 && score <= 100) {
			cout << "Grade: A" << endl;
		}
		else if (score >= 80 && score <= 89) {
			cout << "Grade: B" << endl;
		}
		else if (score >= 70 && score <= 79) {
			cout << "Grade: C" << endl;
		}
		else if (score >= 60 && score <= 69) {
			cout << "Grade: D" << endl;
		}		
		else {
			cout << "Grade: F" << endl;
		}
		cout << "--Student--\n" << endl;
		cout << "Name: " << name << endl;
		cout << "IDSTUDENT: " << IDStudent << endl;
		cout << "SCORE: " << score << endl;
	}
	return 0;	
}