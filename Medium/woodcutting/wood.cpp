//Wood Cutting https://open.kattis.com/problems/woodcutting

#include <iostream>
#include <iomanip>
#include <queue>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;

void woodCutting(){

    int customerCount;
    cin >> customerCount;
    cin.ignore(200, '\n');
    std::priority_queue<double,std::vector<double>,std::greater<double> > q;
    for(int i = 0; i < customerCount; i++){
        //Total up the time for a single customer
        int pieceCount;
        cin >> pieceCount;
        double pieceSize = 0;
        double sum = 0;
        for (int j = 0; j < pieceCount; j++){
            cin >> pieceSize;
            sum += pieceSize;
        }
        cin.ignore(200, '\n');
        //Add this time to the min queue so we pick the smallest waits first
        //cout << "Customer " << i+1 << ": " << sum << "s" << endl;
        q.push(sum);
    }
    double totalWaitTime = 0;
    double sum = 0;
    while (! q.empty()){
        sum +=  q.top();
        totalWaitTime += sum;
        
        //cout << q.top() << endl;
        q.pop();
    }
    cout << std::fixed;
    cout << std::setprecision(9);
    //cout << "Wait time is " << totalWaitTime << " with " <<customerCount << " customers.\n";
    cout << totalWaitTime / customerCount << endl;
}

int main(int argc, char *argv[]){

    int testCases;
    cin >> testCases;
    cin.ignore(200, '\n');

    for(int i = 0; i < testCases; i++){
        woodCutting();
    }
    return 0;
}