#include <iostream>
using namespace std;

int main() {
    string sensor;
    // sensor จะเก็บค่าที่เซนเซอร์อ่านได้: "left", "right", "center"

    cout << "Enter sensor reading (left / right / center): ";
    cin >> sensor;

    if (sensor == "left") {
        cout << "Turn Left" << endl;
    }
    else if (sensor == "right") {
        cout << "Turn Right" << endl;
    }
    else if (sensor == "center") {
        cout << "Go Straight" << endl;
    }
    else {
        cout << "Invalid input" << endl;
    }

    return 0;
}
