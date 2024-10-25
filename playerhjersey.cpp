#include <iostream>
#include <vector>

void PlayersAdd(std::vector<int>& players, int playerNum){
    players.push_back(playerNum);
}

void PlayersPrint(const std::vector<int>& players){
    unsigned int i;

    for(i = 0; i < players.size(); ++i){
        std::cout << " " << players.at(i) << std::endl;
    }
}

int main(){
    std::vector<int> players;
    int playerNum;
    char userKey;

    userKey = '?';

    std::cout << "Commands: 'a' add, 'p' print" << std::endl;
    std::cout << "    'q' quits" << std::endl;

    while (userKey != 'q') {
        std::cout << "Command: ";
        std::cin  >> userKey;
        if (userKey == 'a') {
            std::cout << " Player number: ";
            std::cin  >> playerNum;
            PlayersAdd(players, playerNum);
        }
        else if (userKey == 'p') {
            PlayersPrint(players);
      }
   }
    return 0;
}