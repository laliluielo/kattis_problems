//Oddities https://open.kattis.com/problems/oddities

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){

    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        cin.ignore(200, '\n');
        (x%2) ? cout << x << " is odd\n" : cout << x << " is even\n"; 
    }

    return 0;
}