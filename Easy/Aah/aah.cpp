//Aaah! https://open.kattis.com/problems/aaah


#include <iostream>
#include <iomanip>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[]){

    string john, doctor;
    getline(cin, john);
    getline(cin, doctor);

    john.length() >= doctor.length() ? cout << "go\n" : cout << "no\n";

    return 0;
}