//Odd Gnome https://open.kattis.com/problems/oddgnome

#include <iostream>
#include <iomanip>
#include <limits>
using std::cin;
using std::cout;
using std::endl;

void gnome(){

    int g, start;
    cin >> g >> start;

    int match = start;
    int temp;

    for(int i = 2; i < g; i++){
        cin >> temp;
        if(temp == match+1){
            match++;
        }else{
            cout << i << endl;
            cin.ignore(std::numeric_limits<int>::max(), '\n');
            return;
        }
    }

}

int main(int argc, char *argv[]){

    int n;
    cin >> n;
    cin.ignore(200,'\n');
    while(n--){
        gnome();
    }

    return 0;
}