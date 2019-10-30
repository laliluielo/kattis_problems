//https://open.kattis.com/problems/detaileddifferences

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){

    int n;
    cin >> n;
    cin.ignore(200, '\n');
    std::string A, B;
    while(n--){
        getline(cin, A);
        cout << A << endl;
        getline(cin, B);
        cout << B << endl;
        int l = A.length();
        for(int i = 0; i < l; i++){
            A[i] == B[i] ? cout << '.' : cout << '*';
            
        }
        cout << endl << endl;
    }
    return 0;
}