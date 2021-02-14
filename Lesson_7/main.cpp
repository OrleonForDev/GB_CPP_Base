#include <iostream>

using namespace std;

#define ISINCLUDE(num, end) ((num) >= 0 && (num) < (end))
#define GETELEMENT(array, col ,row) array[col][row]
#define SIZEARRAY(array, type) (sizeof(array)/sizeof(type))

int main() {
    // Initialize dynamic 2d array
    const int rowCount = 3;
    const int colCount = 3;
    int** arr2d = new int*[rowCount];

    for(int i = 0; i < rowCount; ++i)
        arr2d[i] = new int[colCount];

    //Fill array
    for (int i = 0; i < colCount; ++i) {
        for (int j = 0; j < rowCount; ++j) {
            arr2d[i][j] = i+j;
        }
    }

    //Print array
    for (int i = 0; i < colCount; ++i) {
        for (int j = 0; j < rowCount; ++j) {
            cout << arr2d[i][j] << " ";
        }
        cout << endl;
    }


    cout << ISINCLUDE(5+6,10+2) << endl;        // 1 Task
    cout << GETELEMENT(arr2d, 2, 2) << endl;     // 2 Task

    char char_array[] = {'a','b','c','d','e','f','g','h','i','j','k'};   //11 elements
    cout << SIZEARRAY(char_array, char) << endl;               // 3 Task

    return 0;
}
