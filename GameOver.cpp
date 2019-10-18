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

void GameOver::loadDrawTexture() {
    drawTexture.loadFromFile("./textures/game_over_draw.jpg");
    drawSprite.setTexture(drawTexture);
}

void GameOver::loadGameLogCommunicate() {
    double factor = 1;
    gameLogCommunicateTexture.loadFromFile("./textures/game_log_communicate.png");
    gameLogCommunicateSprite.setTexture(gameLogCommunicateTexture);
    gameLogCommunicateSprite.setPosition(175, 160);
}
Sprite GameOver::getWhiteWinTexture() {
    return whiteWinSprite;
}

Sprite GameOver::getBlackWinTexture() {
    return blackWinSprite;
}

Sprite GameOver::getDrawTexture() {
    return drawSprite;
}

Sprite GameOver::getGameLocCommunicate() {
    return gameLogCommunicateSprite;
}