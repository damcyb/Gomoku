//
// Created by FliCom on 16/10/2019.
//

#include "BlackStone.h"

BlackStone::BlackStone() {
    this->loadStoneTexture("./textures/stone_white.png");
}

BlackStone::BlackStone(double x, double y) {
    this->setXCoord(x);
    this->setYCoord(y);
    this->loadStoneTexture("./textures/stone_black.png");
}