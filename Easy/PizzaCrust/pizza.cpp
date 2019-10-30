//Pizza Crust https://open.kattis.com/problems/pizza2

#include <iostream>
#include <math.h>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){

    int R, C;
    cin >> R >> C;

    double radiR = M_PI * R * R;
    double radiC = M_PI * (R-C) * (R-C);
    cout.precision(10);

    cout << radiC / radiR * 100  << endl;

    return 0;
}