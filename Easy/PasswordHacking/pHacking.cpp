//Password Hacking
//https://open.kattis.com/problems/password

#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <iomanip>

using std::string;
using std::cin;
using std::cout;
using std::vector;
using std::pair;

int main(){

    int passwordNumber;
    cin >> passwordNumber;
    cin.ignore(200, '\n');
    string password;
    float probability;
    vector<float> vect;

    for(int i = 1; i <= passwordNumber; i++){
        cin >> password;
        cin >> probability;
        cin.ignore(200, '\n');
        //cout << "Read " << password << " " << probability << std::endl;
        vect.push_back(probability);
    }
    std::sort(vect.begin(), vect.end(), std::greater<float>());
    float sum = 0;
    for(int j = 0; j < vect.size(); j++ ){
        //cout << "j is " << j << " and the probability is " << vect[j] << std::endl;
        sum += (j+1) * vect[j];
    }
    cout << std::fixed;
    cout << std::setprecision(4);
    cout << sum << std::endl;

}