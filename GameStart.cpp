//
// Created by FliCom on 18/10/2019.
//

#include "GameStart.h"

void GameStart::loadGameStartTexture() {
    int factor = 2;
    startGameTexture.loadFromFile("./textures/start-the-game.jpg");
    startGameSprite.setTexture(startGameTexture);
    startGameSprite.setPosition(-100,-200);
    startGameSprite.setScale(factor,factor);
}

Sprite GameStart::getGameStartTexture() {
    return startGameSprite;
}
