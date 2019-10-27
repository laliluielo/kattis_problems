//Knapsack open.kattis.com/problems/knapsack
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <utility>
using std::string;
using std::cin;
using std::cout;

int gcd(int a, int b){
    while (b != 0){
        a%=b;
        std::swap(a, b);
    }
    return a;
} 

int main(int argc, char *argv[]){

    std::string line;
    while (std::getline(std::cin, line))
        //New Test Case
    {
        std::stringstream ss;
        ss << line;
        int capacity = 0, objectCount = 0;
        ss >> capacity >> objectCount;
        ss.clear();
        //cout << "Capacity " << capacity << " with " << objectCount << " options to pick.\n";
        std::pair<int,int> objectArray[objectCount];
        for(int i = 0; i < objectCount; i++){
            //Parse Object Value/Weight Pairs
            std::pair <int, int> object;
            int value,weight;
            std::getline(std::cin, line);
            ss << line;
            ss >> value >> weight;
            ss.clear();
            objectArray[i] = std::make_pair(weight, value);
        }

/*         for(int i = 0; i < objectCount; i++){
            cout << "Object " << i << ": V" << objectArray[i].second << ", W" << objectArray[i].first << std::endl;
        } */
        int GCD = objectArray[0].first;
        //Find GCD to speed up calculations
        for(int i = 1; i < objectCount; i ++){
            GCD = gcd(GCD, objectArray[i].first);
        }
        //cout << "GCD: " << GCD << std::endl;;
        std::pair<int,std::vector<int> > DPArray[objectCount+1][capacity+1];
        std::vector<int> none;
        std::pair<int, std::vector<int> > empty = make_pair(0, none);
        for(int i = 0; i <= capacity; i+= GCD){
            DPArray[0][i] = empty;
        }
        for(int i = 1; i <= objectCount; i++){ // I is object under consideration
            for(int j = 0; j <= capacity; j+= GCD){ // J is capacity of the knapsack
                if(objectArray[i-1].first > j){
                    DPArray[i][j] = DPArray[i-1][j];
                }
                else{
                    std::pair<int,std::vector<int> > dontAdd = DPArray[i-1][j];
                    std::pair<int,std::vector<int> > Add = DPArray[i-1][j-objectArray[i-1].first];
                    Add.first += objectArray[i-1].second;
                    Add.second.push_back(i-1);
                    if(Add.first > dontAdd.first){
                        DPArray[i][j] = Add;
                    }else{
                        DPArray[i][j] = dontAdd;
                    }
                }
            }
        }

/*       Debugging Use
        for(int i = 0; i <= objectCount; i++){
            for(int j = 0; j <= capacity; j++){
                std::pair<int,std::vector<int> > lookingAt = DPArray[i][j];
                cout << "DPArray[" << i << "][" << j << "]:" << "Value: " << lookingAt.first;
                cout << " Objects: ";
                for(std::vector<int>::const_iterator iter = lookingAt.second.begin(); iter != lookingAt.second.end(); ++iter){
                    cout << *iter << ' ';
                }
                cout << std::endl;
            }
        } */

        //cout << "Final Answer \n";
        std::pair<int,std::vector<int> > answer = DPArray[objectCount][capacity];
        int size = answer.second.size();
        cout << size << std::endl;
        for(std::vector<int>::const_iterator iter = answer.second.begin(); iter != answer.second.end(); ++iter){
            cout << *iter << ' ';
            }
        cout << std::endl;
    }
}