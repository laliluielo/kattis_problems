//Stuck in a time loop https://open.kattis.com/problems/timeloop

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){

    int a;
    cin >> a;
    for(int i = 1; i <= a; i++){
        cout << i << " Abracadabra" << endl;
    }

    return 0;
}