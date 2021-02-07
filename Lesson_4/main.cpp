#include <iostream>

using namespace std;

int main() {
    // Task 1
    int a = 0, b = 0, sum = 0;
    cout << "Task 1" << endl;
    cout << "Please, enter 2 numbers" << endl;
    cin >> a >> b;
    sum = a + b;
    if (sum >= 10 && sum <= 20){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    cout << endl;

    //Task 2
    cout << "Task 2" << endl;
    cout << "Please, enter 1 numbers" << endl;
    int n = 0;
    bool flag = false;
    cin >> n;
    for (int i = 1; i <= n/2; ++i) {
        if(n % i == 0){
            flag = true;
        }
    }

    if (flag){
        cout << n << " is composite" << endl;    // Составное
    }
    else{
        cout << n << " is prime" << endl;       // Простое
    }
    cout << endl;

    //Task 3
    cout << "Task 3" << endl;

    const int c = 5;    // Change value to any number to check
    const int d = 10;

    cout << (c == 10 || d == 10 || c+d==10) << endl;
    cout << endl;

    //Task 4
    cout << "Task 4" << endl;
    int year = 0;
    cout << "Enter the year" << endl;
    cin >> year;

    bool IsLeapYear = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ;

    if (IsLeapYear){
        cout << "Year is leap" << endl;
    }
    else{
        cout << "Year is not leap" << endl;
    }

    return 0;
}
