//Parsing Hex https://open.kattis.com/problems/parsinghex

#include <iostream>
#include <string>
#include <regex>

using std::string;

int main(int argc, char *argv[]){

    string line;
    std::regex hexSearch("0[Xx][A-Fa-f0-9]{1,8}");

    while(std::cin >> line){
        //std::cout << line;
        auto matchbegin = std::sregex_iterator(line.begin(), line.end(), hexSearch);
        auto matchend = std::sregex_iterator();

        for(std::sregex_iterator i = matchbegin; i != matchend; i++){
            std::smatch match = *i;
            std::string match_hex = match.str();
            long x = std::stoul(match_hex, 0, 16);
            std::cout << match_hex << " " << x << std::endl;
        }
    }

    return 0;
}