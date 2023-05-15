#include "../headers/player.h"

Player::Player(int playerColor, int playerType, int playerDifficulty) : playerColor(playerColor), playerType(playerType), playerDifficulty(playerDifficulty)
{
}

int Player::getPlayerColor()
{
    return this->playerColor;
}

int Player::getPlayerType()
{
    return this->playerType;
}

int Player::getPlayerDifficulty()
{
    return this->playerDifficulty;
}

