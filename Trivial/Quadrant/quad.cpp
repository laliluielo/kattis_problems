//https://open.kattis.com/problems/quadrant

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){

    int x, y;
    cin >> x;
    cin.ignore(200, '\n');
    cin >> y;
    if(x > 0){
        if(y > 0){
            cout << 1 << endl;
        }else{
            cout << 4 << endl;
        }
    }else{
        if(y > 0){
            cout << 2 << endl;
        }else{
            cout << 3 << endl;
        }
    }
    return 0;
}