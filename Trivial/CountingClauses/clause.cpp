//Counting Clauses https://open.kattis.com/problems/countingclauses
//The problem contains a lot of fluff.  It's actually just asking if the first
//number given is greater than or equal to 8.
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){

    int a;
    cin >> a;
    a >= 8 ? cout << "satisfactory\n" : cout << "unsatisfactory\n";

    return 0;
}