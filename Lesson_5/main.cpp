#include <iostream>

using namespace std;


namespace arrayFuncs {    // Task 6
    void ReverseArray(int *array, size_t sizeMas);

    void PrintArray(const int *array, size_t sizeMas);

    void FillArray(int *array, size_t sizeMas);

    bool CheckBallance(int *array, size_t sizeMas);

    void ShiftArray(int *array, size_t sizeMas, int shift);

}

using namespace arrayFuncs;

int main() {

    //Task 1
    cout << "Task 1" << endl;
    int mas[] = { 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 };
    int sizeMas = sizeof(mas)/sizeof(mas[0]);

    cout << "Initial array: ";
    PrintArray(mas, sizeMas);

    cout << "Final array:   ";
    ReverseArray(mas, sizeMas);
    PrintArray(mas, sizeMas);
    cout << endl;

    //Task 2
    cout << "Task 2" << endl;
    const int SIZE = 8;
    int mas2[SIZE];
    FillArray(mas2, SIZE);
    PrintArray(mas2, SIZE);
    cout << endl;

    //Task 3
    cout << "Task 3" << endl;
    int mas3[] = {10, 1, 2, 3, 4};
    sizeMas = sizeof(mas3)/sizeof(mas3[0]);
    cout << CheckBallance(mas3, sizeMas) << endl;
    cout << endl;

    //Task 4
    cout << "Task 4" << endl;
    int mas5[] = { 1, 2, 3, 4, 5 };
    sizeMas = sizeof(mas5)/sizeof(mas5[0]);

    cout << "Initial array: ";
    PrintArray(mas5, sizeMas);

    cout << "Final array:   ";
    ShiftArray(mas5, sizeMas, -2);
    PrintArray(mas5, sizeMas);
    cout << endl;

    return 0;
}










