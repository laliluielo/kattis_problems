//Autori https://open.kattis.com/problems/autori

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){

    std::string line;
    getline(cin, line);
    for(auto c : line){
        if(isupper(c)){
            cout << c;
        }        
    }
    cout << endl;
    return 0;
}