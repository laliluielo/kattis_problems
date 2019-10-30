//Take two Stones https://open.kattis.com/problems/twostones


#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){

    long N;
    cin >> N;
    (N%2) ? cout <<"Alice\n" : cout <<"Bob\n"; 

    return 0;
}