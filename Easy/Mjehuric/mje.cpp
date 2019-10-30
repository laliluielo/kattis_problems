//Mjehuric! https://open.kattis.com/problems/mjehuric
//I think this is quite a poor way to do this. But it's late :)

#include <iostream>
#include <iomanip>
#include <string>
using std::cin;
using std::cout;
using std::endl;

void print(int array[]){
    for(int i = 0; i < 5; i++){
        cout << array[i] << ' ';
    }
    cout << endl;
}

void swap(int array[]){

    while(true){
        int temp;
        if(array[0] > array[1]){
            temp = array[1];
            array[1] = array[0];
            array[0] = temp;
            print(array);
        }
        if(array[1] > array[2]){
            temp = array[2];
            array[2] = array[1];
            array[1] = temp;
            print(array);
        }
        if(array[2] > array[3]){
            temp = array[3];
            array[3] = array[2];
            array[2] = temp;
            print(array);
        }
        if(array[3] > array[4]){
            temp = array[4];
            array[4] = array[3];
            array[3] = temp;
            print(array);
        }
        if(array[0] ==1 && array[1] ==2 && array[2] ==3 && array[3] ==4 && array[4] ==5){
            return;
        }
    }
}



int main(int argc, char *argv[]){

    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    int array[5] = {a,b,c,d,e};
    swap(array);

    return 0;
}