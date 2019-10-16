//
// Created by FliCom on 16/10/2019.
//

#include "WhiteStone.h"

WhiteStone::WhiteStone() {
    loadStoneTexture("./textures/stone_white.png");
}

WhiteStone::WhiteStone(double x, double y) {
    this->setXCoord(x);
    this->setYCoord(y);
    loadStoneTexture("./textures/stone_white.png");
}


