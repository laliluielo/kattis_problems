//Judging Moose https://open.kattis.com/problems/judgingmoose

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){

    int l, r;
    cin >> l >> r ;

    if(l + r == 0){
        cout << "Not a moose" << endl;
        return 0;
    }

    if(l == r){
        cout << "Even " << 2*l << endl;
        return 0;
    }

    l > r ? cout <<"Odd " << 2* l << endl : cout << "Odd " << 2*r <<endl; 

    return 0;
}