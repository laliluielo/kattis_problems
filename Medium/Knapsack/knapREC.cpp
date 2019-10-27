//Knapsack open.kattis.com/problems/knapsack
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <utility>
using std::string;
using std::cin;
using std::cout;

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

/*        for(int i = 0; i < objectCount; i++){
            cout << "Object " << i << ": V" << objectArray[i].second << ", W" << objectArray[i].first << std::endl;
        } */

        


    }
}