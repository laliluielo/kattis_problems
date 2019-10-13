//Free Food https://open.kattis.com/problems/freefood

#include <iostream>
#include <fstream>
#include <string>
#include <unordered_set>
#include <sstream>

using std::string;

int main(int argc, char *argv[]){

    std::string line;
    //std::ifstream inputfile (argv[1]);
    std::unordered_set <int> hashSet;
        getline(std::cin, line);
        int eventCount = std::stoi(line);
        for(int i = 0; i < eventCount; i ++){
            getline(std::cin, line);
            std::stringstream ss;
            ss << line;
            string startS;
            string endS;
            while(!ss.eof()){
                ss >> startS;
                ss >> endS;
                int start = std::stoi(startS);
                int end = std::stoi(endS);
                for(int j = start; j <= end; j ++){
                    if(hashSet.count(j) == 0){
                        hashSet.insert(j);
                    }
                }
            }
        }
        std::cout << hashSet.size() << std::endl;
}