//Secret Chamber at Mount Rushmore https://open.kattis.com/problems/secretchamber

#include <iostream>
#include <string>
#include <map>

using std::cin;
using std::cout;
using std::endl;

void transform(const std::multimap<char,char> & t, char A, char B){
    //TODO: Figure out how the heck this works
}

void isMatch(const std::multimap<char,char> & t){

    std::string pairA, pairB;
    cin >> pairA >> pairB;
    cin.ignore(200, '\n');
    if(pairA.length() != pairB.length()){
        cout << "no" << endl;
        return;
    }
    
    for(int i = 0; i < pairA.length(); i++){
        char A = pairA[i];
        char B = pairB[i];
        cout << "A[" << i << "] is " << A << " and B[" << i << "] is " << B << endl;
        if(A == B){
            continue;
        }
        transform(t, A, B);
    }

    cout << "yes" << endl;
    return;
    

}
int main(int argc, char *argv[]){

    int m, n; //M is number of translations of letters, n is number of word pairs
    cin >> m >> n ;
    cin.ignore(200, '\n');

    std::multimap<char, char> translationTable;
    char before, after;
    for(int i = 0; i < m; i++){
        cin >> before >> after;
        cin.ignore(200, '\n');
        translationTable.insert(std::make_pair(before, after));
    }

    for(int i = 0; i < n; i++){
        isMatch(translationTable);
    }







}