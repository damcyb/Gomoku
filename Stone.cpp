//
// Created by FliCom on 11/10/2019.
//

#include "Stone.h"

void Stone::loadStoneTexture(String path) {
    float factor = 0.88;
    stoneTexture.loadFromFile(path);
    stonePNG.setTexture(stoneTexture);
    stonePNG.setScale(factor, factor);
}

Sprite Stone::getStoneTexture(){
    return stonePNG;
}
