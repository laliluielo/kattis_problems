//Trojke https://open.kattis.com/problems/trojke

#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::cin;
using std::cout;


class N_N_Matrix
{
public:
    N_N_Matrix(size_t rows);
    int& operator()(size_t i, size_t j);
    int operator()(size_t i, size_t j) const;
    int countColumn(int column);
    void print();

private:
    size_t mRows;
    std::vector<int> mData;
};

N_N_Matrix::N_N_Matrix(size_t rows)
: mRows(rows),
  mData(rows * rows)
{
}

int& N_N_Matrix::operator()(size_t i, size_t j)
{
    return mData[i * mRows + j];
}



int N_N_Matrix::operator()(size_t i, size_t j) const
{
    return mData[i * mRows + j];
}

void N_N_Matrix::print(){
    
    printf("%d\n" , mRows);
    for(int i = 0; i < mRows; i++){
        for(int j = 0; j < mRows; j++){
            printf("%d " , mData[j * mRows + i]);
        }
        printf("\n");
    }
}

int N_N_Matrix::countColumn(int column){

    int count = 0;
    for(int i = 0; i < mRows; i++){
        if(mData[column*mRows+i])
            count++;
    }
    //printf("Letters in column %d: %d\n", column, count);
    return count;
}

long permutation(int n){
    if(n < 3){
        return 0;
    }
    if(n == 3){
        return 3;
    }
    long comb = (n*(n-1)*(n-2)) / 6;
    return comb;
}

int main(int argc, char *argv[]){

    int N;
    cin >> N;
    cin.ignore(200,'\n');
    N_N_Matrix M (N);
    char temp;
    int count;
    long total = 0;
    for(int i = 0; i < N; i++){
        count = 0;
        for(int j = 0; j < N; j++){
            cin >> temp;
            if(temp == '.'){
                M(j,i) = 0;
                //printf("0 ");
            }else{
                M(j,i)= 1;
                //printf("1 ");
                count++;
            }
        }
        cin.ignore(200, '\n');
        //printf("\n");
        total += permutation(count);
    }
    //M.print();
    //printf("Horizontal permutations: %ld\n", total);
    long verts = 0;
    for(int j = 0; j < N; j++){
        verts+=permutation(M.countColumn(j));
    }
    //printf("Vertical permutations: %ld\n", verts);

    //Diagonal permutations
    long dia= 0;
    int countB = 0;
    //Top half
    for( int k = 0 ; k < N ; k++ ) {
        count = 0;
        countB = 0;
        for( int j = 0 ; j <= k ; j++ ) {
            int i = k - j;
            //printf("%d ", M(j, i) );
            count+=(M(j,i));
            countB+=(M(i,j));
        }
        dia+= permutation(count);
        dia+= permutation(countB);
        //cout << "\n";
    }
    //Bottom Half
    for( int k = N - 2 ; k >= 0 ; k-- ) {
        count = 0;
        countB =0;
        for( int j = 0 ; j <= k ; j++ ) {
            int i = k - j;
            //printf("%d ", M((N - i - 1), (N - j - 1)));
            count+=(M((N - i - 1), (N - j - 1)));
            countB+=(M((N-j-i),(N-i-1)));
        }
        dia+=permutation(count);
        dia+=permutation(countB);
        //cout << '\n';
    }
    //printf("Diagonal permutations: %ld\n", dia);
    //cout << "Final Answer: " << total+verts+dia << std::endl;
    cout << total+verts+dia << std::endl;

    return 0;
}