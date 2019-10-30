//Faktor https://open.kattis.com/problems/faktor

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){

    int A, I;
    cin >> A >> I;
    cout << A*(I-1)+1 << endl;
    return 0;
}