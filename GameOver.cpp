//
// Created by FliCom on 16/10/2019.
//

#include "GameOver.h"

void GameOver::loadWhiteWinTexture() {
    double factor = 2.43 * 0.96;
    whiteWinTexture.loadFromFile("./textures/game_over_white.jpg");
    whiteWinSprite.setTexture(whiteWinTexture);
    //whiteWinSprite.setScale(factor,factor);
}

void GameOver::loadBlackWinTexture() {
    double factor = 2.43 * 0.96;
    blackWinTexture.loadFromFile("./textures/game_over_black.jpg");
    blackWinSprite.setTexture(blackWinTexture);
    //blackWinSprite.setScale(factor,factor);
}

Sprite GameOver::getWhiteWinTexture() {
    return whiteWinSprite;
}

Sprite GameOver::getBlackWinTexture() {
    return blackWinSprite;
}