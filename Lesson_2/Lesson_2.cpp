#include <iostream>

using namespace std;

// enum for tic tac toe
enum class Symbols { empty, cross, zero };

// struct for game field
struct GameField{
    int width;
    int height;
};

int main(){
    // variables definition
    int8_t var_8t = 125;
    uint8_t var_u8t = 255;

    int16_t var_16t = -698;
    uint16_t var_u16t = 348;

    int32_t var_32t = -266699;
    uint32_t var_u32t = 987452;

    bool flag = true;

    float var_f = -567.689f;
    double var_d = 567.68989774415;

    // variables printing
    cout << var_8t << endl;
    cout << var_u8t << endl;

    cout << var_16t << endl;
    cout << var_u16t << endl;

    cout << var_32t << endl;
    cout << var_u32t << endl;

    cout << var_f << endl;
    cout << var_d << endl;

    // init array for field
    GameField gamefield;
    gamefield.width = 3;
    gamefield.height = 3;
    Symbols field[gamefield.width][gamefield.height];



    // fill array with default values
    for (int i = 0; i < gamefield.width; ++i){
        for (int j = 0; j < gamefield.height; ++j){
            field[i][j] = Symbols::empty;
        }
    }

    // print array
    for (int i = 0; i < gamefield.width; ++i){
        for (int j = 0; j < gamefield.height; ++j){
            if (field[i][j] == Symbols::empty){
                cout << '*' << ' ';
            }
        }
        cout << endl;
    }


    return 0;
}