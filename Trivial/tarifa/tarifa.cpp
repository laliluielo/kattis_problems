//Tarifa https://open.kattis.com/problems/tarifa

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){

    int cap;
    cin >> cap;
    cin.ignore(200, '\n');
    int N;
    cin >> N;
    cin.ignore(200, '\n');
    int sum = 0;
    for(int i = 0; i < N; i++){
        int usage;
        cin >> usage;
        cin.ignore(200, '\n');
        int change = (cap - usage);
        sum += change;
    }
    cout << sum+cap << endl;

    return 0;
}