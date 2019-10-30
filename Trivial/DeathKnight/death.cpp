//https://open.kattis.com/problems/deathknight

#include <iostream>
#include <regex>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){

    int n;
    cin >> n;
    cin.ignore(200, '\n');
    int victories = 0;
    while(n--){
        std::string input;
        getline(cin, input);
        if(! std::regex_search(input, std::regex("CD"))){
            victories++;
        }
    }
    cout << victories << endl;
    return 0;
}