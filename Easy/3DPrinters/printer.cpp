//https://open.kattis.com/problems/3dprinter

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){

    int statues;
    cin >> statues;
    int printers = 1;
    int days = 0;
    if(statues == 1){
        cout << 1 << endl;
        return 0;
    }
    //Print printers until you can print half the statues in a day
    while(printers < statues / 2.0){
        printers += printers;
        days++;
    }

    cout << days + 2 << endl;

    return 0;
}