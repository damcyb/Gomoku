//
// Created by FliCom on 11/10/2019.
//

#include "Stone.h"

void Stone::loadStoneTexture() {
    float factor = 1;
    stoneTexture.loadFromFile("./textures/stone_white.png");
    //board = textureManager.getboardTexture();
    stonePNG.setTexture(stoneTexture);
    stonePNG.setScale(factor, factor);
}

Sprite Stone::getStoneTexture() {
    return stonePNG;
}
