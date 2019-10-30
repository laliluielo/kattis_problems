//Batter Up https://open.kattis.com/problems/batterup

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){

    int atBats;
    cin >> atBats;
    cin.ignore(200, '\n');
    float bases, denom, cur;
    bases = 0;
    denom = 0;
    for(int i = 0; i < atBats; i++){
        cin >> cur;
        if(cur == -1){
            continue;
        }
        bases += cur;
        denom++;
    }
    cout.precision(5);
    cout << bases / denom << endl;
    return 0;
}