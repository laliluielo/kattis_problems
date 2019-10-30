//https://open.kattis.com/problems/acm

#include <iostream>
#include <string>
#include <map>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){

    int minutes;
    char letter;
    std::string result;
    int correct = 0;
    int penalty = 0;
    //Read the log by line until -1
    std::map<char,int> problems;
    while(true){
        cin >> minutes;
        if(minutes == -1){ //End of log
            cout << correct << " " << penalty << endl;
            return 0;
        }
        cin >> letter >> result;
        cin.ignore(200,'\n');
        if(result == "right")//add minutes and penalty to time, increment correct count
            if(problems.find(letter) != problems.end()){//Not solved on first try
                penalty += (problems.find(letter)->second) * 20;
                penalty += minutes;
                correct++;
            }else{//solved on first try
                penalty+= minutes;
                correct++;
            }
        else{ //result was Wrong
            if(problems.find(letter) != problems.end()){//Not first attempt
                problems.find(letter)-> second++; //increment attempt count
            }else{//first attempt at this problem, need to make char-int pair and add to map
                problems.insert(std::make_pair(letter, 1));
            }
        }
    }

    return 0;
}