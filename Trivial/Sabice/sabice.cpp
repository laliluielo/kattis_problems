//Sabice https://open.kattis.com/problems/sibice

#include <iostream>
#include <string>
#include <math.h>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){

    int matches, W, H;
    cin >> matches >> W >> H;
    cin.ignore(200, '\n');
    double diag = sqrt(pow(W,2) + pow(H,2));
    while(matches--){
        int size;
        cin >> size;
        cin.ignore(200, '\n');
        size <= diag ? cout << "DA" << endl : cout << "NE" << endl;
    }
    return 0;
}