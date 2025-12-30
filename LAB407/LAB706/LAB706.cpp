#include <iostream>
using namespace std;

void printArray(int* p, int size) {
    // TODO
    for(int i = 0; i < size; i++) {
        cout << *(p + i) << " ";
	}
}

void swapValue(int* a, int* b) {
    // TODO
	int temp = *a;  
	*a = *b;
	*b = temp;
}

void sortDescending(int* p, int size) {
    // TODO
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(p + i) < *(p + j)) {
                swapValue((p + i), (p + j));
            }
        }
    }
}
int main() {
    int arr[] = { 5, 2, 9, 1, 3 };
    int size = 5;
    printArray(arr, size);
    sortDescending(arr, size);
    printArray(arr, size);
    return 0;

}
