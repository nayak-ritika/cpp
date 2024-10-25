#include <iostream>
#include <vector>

bool placeQueens(int N, std::vector < std::vector <bool> >& board, int row){

    



    return ;
}

int main(){

    int N;
    int row;
    std::cout << "How many queens to place on the board? " << std::endl;
    std::cin >> N;

    if(N >= 1){
        ;
    }
    else{
        std::cout << "error: invalid input" << std::endl;
        return 0;
    }

    std::vector < std::vector<bool> >board( N, std::vector<bool> (N));

    placeQueens(N, board, row);

    return 0;
}