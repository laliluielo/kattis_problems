//Bela https://open.kattis.com/problems/bela

#include <iostream>
#include <string>
#include <map>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){

    int N;
    char D;
    cin >> N >> D;
    cin.ignore(200, '\n');
    N = 4*N;
    std::map<char, int> dominant = {{'A',11}, {'K',4},{'Q',3},{'J',20},{'T',10},{'9',14},{'8',0},{'7',0}};
    std::map<char, int> nd = {{'A',11}, {'K',4},{'Q',3},{'J',2},{'T',10},{'9',0},{'8',0},{'7',0}};    

    std::string card;
    long pointTotal = 0;
    while(N--){
        getline(cin, card);
        if(card[1] == D){
            //cout << card << " is dominant and has value " << dominant.find(card[0]) -> second << endl;
            pointTotal += dominant.find(card[0]) -> second;
        }else{
            //cout << card << " has value " << nd.find(card[0]) -> second << endl;
            pointTotal += nd.find(card[0]) -> second;
        }
    }
    cout << pointTotal << endl;

    return 0;
}