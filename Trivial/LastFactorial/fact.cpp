//Last Factorial Digit https://open.kattis.com/problems/lastfactorialdigit

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int fact(int A){
    if(A == 1 || A == 0){
        return 1;
    }
    return (A * fact(A-1));
}

int main(int argc, char *argv[]){

    int T;
    cin >> T;
    cin.ignore(200, '\n');
    int A[11];
    for(int i = 0; i < 11; i++){
        A[i] = fact(i)% 10;
        //cout << A[i] << " ";
    }
    //cout << endl;



    for(int i = 0; i < T; i++){
        int N;
        cin >> N;
        cin.ignore(200, '\n');
        cout << A[N] << endl;
    }

    return 0;
}