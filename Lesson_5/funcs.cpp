#include <iostream>
using namespace std;

namespace arrayFuncs{
    void PrintArray(const int* array, size_t sizeMas){
        for (int i = 0; i < sizeMas; ++i) {
            cout << array[i] << ' ';
        }
        cout << endl;
    }

    void ReverseArray(int* array, size_t sizeMas) {
        for (int i = 0; i < sizeMas; ++i) {
            array[i] == 0 ? array[i] = 1 : array[i] = 0;
        }
    }

    void FillArray(int* array, size_t sizeMas) {
        array[0] = 1;                          // First element
        for (int i = 1; i < sizeMas; ++i) {
            array[i] = array[i-1] + 3;
        }
    }

    int ElementsSum(int* array, int begin, int end){
        int sum = 0;
        for (int i = begin; i <= end; ++i) {
            sum += array[i];
        }
        return sum;
    }

    bool CheckBallance(int* array, size_t sizeMas){
        for (int i = 0; i < sizeMas; ++i) {
            if (ElementsSum(array, 0, i) == ElementsSum(array, i+1, sizeMas-1))
                return true;
        }
        return false;
    }

    void ShiftArray(int* array, size_t sizeMas, int shift) {
        int last = sizeMas - 1;
        int first = 0;
        int temp = 0;

        bool left_direction = shift < 0;

        shift = abs(shift) % sizeMas;       //reduce shift
        if (left_direction){
            shift = sizeMas - shift;        // trick for negative shift :)
        }

        while (shift != 0) {
            temp = array[last];
            for (int i = sizeMas - 1; i > 0; --i) {
                array[i] = array[i - 1];
            }
            array[first] = temp;
            --shift;
        }
    }
}

