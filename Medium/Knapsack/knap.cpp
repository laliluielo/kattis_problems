//Knapsack open.kattis.com/problems/knapsack
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <utility>
#include <cstring>
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
//        cout << "Capacity " << capacity << " with " << objectCount << " options to pick.\n";
        std::pair<int,int> objectArray[objectCount];
        for(int i = 0; i < objectCount; i++){
            //Parse Object Value/Weight Pairs
            std::pair <int, int> object;
            int value=0,weight=0;
            std::getline(std::cin, line);
            ss << line;
            ss >> value >> weight;
            ss.clear();
            objectArray[i] = std::make_pair(weight, value);
        }

/*       for(int i = 0; i < objectCount; i++){
            cout << "Object " << i << ": V" << objectArray[i].second << ", W" << objectArray[i].first << std::endl;
        }
*/
        int *DPArray = new int[2001*2001]; 
        int GCD = objectArray[0].first;
        //Find GCD to *maybe* speed up calculations
        for(int i = 1; i < objectCount; i ++){
            GCD = gcd(GCD, objectArray[i].first);
        }
        for(int i = 0; i <= capacity; i++){ //No items
            DPArray[i]=0;
        }
        for(int j = 0; j <= objectCount; j++){//No capacity
            DPArray[j * capacity] = 0;
        }
        for(int i = 1; i <= objectCount; i++){ // I is object under consideration
            //cout << "Object " << i-1 << std::endl;
            int W = objectArray[i-1].first;
            for(int j = 0; j <= capacity; j+= 1){ // J is current capacity of the knapsack
                if(j == 0)
                continue;
                if(W > j){
                    DPArray[i * capacity+j] = DPArray[(i-1) * capacity+j];
                }
                else{
                    int dontAdd = DPArray[(i-1) * capacity+j];
                    int Add = DPArray[(i-1) * capacity+(j-W)];
                    if(j-W == 0){//Hack
                        Add = 0;
                    }
                    Add += objectArray[i-1].second;
                    //cout << "Checking " << Add << " against " << dontAdd << std::endl;
                    if(Add > dontAdd){
                        //cout << "Adding " << Add << " at position [" << i <<"][" << j << "] (" << i * capacity+j << ")" << std::endl;
                        DPArray[i * capacity+j] = Add;
                        //cout << DPArray[i * capacity+j] << std::endl;
                    }else{
                        DPArray[i * capacity+j] = dontAdd;
                    }
                }
                //cout << "Solved [" << i << "][" << j << "] aka (" << i * capacity + j << "):" << DPArray[i*capacity+j] << "\n";
            }
        }
        //cout << "Final Value: " << DPArray[objectCount*capacity+capacity] << std::endl;
/*
          for(int i = 0; i <= objectCount; i++){
            for(int j = 1; j <= capacity; j++){
                int Value = DPArray[i * capacity+j];
                //cout << "DPArray[" << i * capacity + j << "]:" << Value << " ";
                //cout << std::endl;
                cout << Value << " ";
            }
            cout << std::endl;
        }  
*/



        int j = capacity;
        std::vector<int> answer;
        for(int i = objectCount; i > 0; i--){
            int iValue = DPArray[i * capacity+j];
            int preValue = DPArray[(i-1) *capacity+j];
            //cout << iValue << " compared to " << preValue << std::endl;
            if(iValue == preValue)//Object i wasn't selected
                {continue;}
            else{
                answer.push_back(i-1);
                j= j-objectArray[i-1].first;
                if(j == 0){
                    break;
                }
            }
        }
        int size = answer.size();
        cout << size << std::endl;
        for(std::vector<int>::const_iterator iter = answer.begin(); iter != answer.end(); ++iter){
            cout << *iter << ' ';
            }
        cout << std::endl;

        delete DPArray;

    }//end While

}//end program
