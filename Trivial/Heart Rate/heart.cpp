//Heart Rate https://open.kattis.com/problems/heartrate

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){

    int cases;
    cin >> cases;
    cin.ignore(200,'\n');
    while(cases--){
        double b, p;
        cin >> b >> p;
        cin.ignore(200, '\n');
        double rate = 15.0 / p;
        cout << std::fixed;
        cout.precision(4);
        cout << (b-1)*rate*4.0 << " " << b*rate*4.0 << " " << (b+1)*rate*4.0 << endl;
    }
    return 0;
}