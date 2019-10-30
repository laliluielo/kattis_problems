//Piece of Cake https://open.kattis.com/problems/pieceofcake2

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){

    int n, h, v;
    cin >> n >> h >> v;

    n-h > h ? h=n-h : h;
    n-v > v ? v=n-v : v;

    //cout << h << " " << v << endl;
    cout << h*v*4 << endl;
    return 0;
}