#include <iostream>
#include <algorithm>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){

    int A, B, C, I, J, K;
    cin >> A >> B >> C;
    cin.ignore(200, '\n');
    cin >> I >> J >> K;

    float AR = (float)A / I;
    float BR = (float)B / J;
    float CR = (float)C / K;

    float factor = std::min({AR, BR, CR});
    //cout << factor << endl;

    float a1, b1, c1;
    a1 = A - (factor*I);
    b1 = B - (factor*J);
    c1 = C - (factor*K);
    cout << std::fixed;
    cout.precision(6);
    cout << a1 << ' ' << b1 << ' ' << c1 << endl;

    return 0;
}