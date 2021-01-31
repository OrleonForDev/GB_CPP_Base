#include <iostream>
#include "variables.h"

using namespace std;

int main(){
    // exercise one and three
    // You can find definition of variables in variables.h file
    cout << "Enter a,b,c,d" << endl;
    cin >> a >> b >> c >> d;
    result = a * (b + (static_cast<float>(c) / d));
    cout << result << endl;

    // exercise two
    cout << "Enter number" << endl;
    cin >> a;
    result = (a > 21) ? (a-21)*2 : 21-a; //Yeap, result is float (because of ex.1) but it will be convert to int
    cout << result << endl;

    // exercise four
    int array[3][3][3] = {{{1,2,3},
                           {4,5,6},
                           {7,8,9}
                          },
                          {{10,11,12},
                           {13,14,15},
                           {16,17,18}
                          },
                          {{19,20,21},
                           {22,23,24},
                           {25,26,27}
                          }
                         };
    int *p_array = &array[1][1][1];
    cout << "Middle cell is: " << *p_array;

    return 0;
}