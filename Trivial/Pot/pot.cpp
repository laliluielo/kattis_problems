//Pot https://open.kattis.com/problems/pot

#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){

    int N;
    cin >> N;
    cin.ignore(200, '\n');

    long long sum = 0;
    std::string input;
    while(N--){
        getline(cin, input);
        int length = input.length();
        char t = input.back();
        int p = t - '0';
        input.pop_back();
        //cout << input << " with power " << p << endl;
        sum += pow(stod(input), p);
    }
    cout << sum << endl;

    return 0;
}