//Paul Eigon https://open.kattis.com/problems/pauleigon

#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){

    long N, P, Q;
    cin >> N >> P >> Q;

    long matchesPlayed = P + Q;
    
    int rounds = matchesPlayed / N;
    rounds % 2 ? cout << "opponent\n" : cout << "paul\n";


    return 0;
}