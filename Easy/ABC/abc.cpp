//ABC https://open.kattis.com/problems/abc

#include <iostream>
#include <algorithm>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[]){

    int a, b, c;
    cin >> a >> b >> c;
    cin.ignore(200, '\n');
    int array[3] = {a, b, c};
    std::sort(std::begin(array), std::end(array));
    string order;
    getline(cin, order);
    for(auto c : order){
        switch(c){
            case('A'): 
            cout << array[0] << " ";
            break;
            case('B'):
            cout << array[1] << " ";
            break;
            case('C'):
            cout << array[2] << " ";
            break;
        }
    }
    cout << endl;

    return 0;
}