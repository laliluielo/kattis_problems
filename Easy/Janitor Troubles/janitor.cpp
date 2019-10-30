//Janitor Troubles https://open.kattis.com/problems/janitortroubles

//Implementation based on Brahmagupta's formula: https://en.wikipedia.org/wiki/Cyclic_quadrilateral
// K = sqrt((s-a)(s-b)(s-c))s-c

#include <iostream>
#include <math.h>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    double S = (a+b+c+d) / 2.0;
    //cout << S << endl;
    double K = sqrt((S-a)*(S-b)*(S-c)*(S-d));
    cout.precision(10);
    cout << K << endl;

    return 0;
}