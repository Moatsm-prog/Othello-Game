#ifndef PLAYER_H
#define PLAYER_H

class Player
{
private:
    int playerColor;
    int playerType;
    int playerDifficulty;

public:
    Player(int playerColor, int playerType, int playerDifficulty);
    int getPlayerColor();
    int getPlayerType();
    int getPlayerDifficulty();
    static const int HUMAN = 0;
    static const int COMPUTER = 1;

    static const int WHITE = 0;
    static const int BLACK = 1;

    static const int EASY = 0;
    static const int MEDIUM = 1;
    static const int HARD = 2;
};

#endif // PLAYER_H