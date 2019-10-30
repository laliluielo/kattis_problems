//Hissing Microphone https://open.kattis.com/problems/hissingmicrophone

#include <iostream>
#include <string>
#include <regex>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){

    std::string line;
    getline(cin, line);
    std::regex_search(line, std::regex("ss")) ? cout << "hiss" << endl : cout << "no hiss" << endl;
    return 0;
}