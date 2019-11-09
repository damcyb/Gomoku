//
// Created by FliCom on 16/10/2019.
//

#include "WhiteStone.h"

WhiteStone::WhiteStone() {
    //loadStoneTexture("./textures/stone_white.png");
}

void WhiteStone::loadStoneTexture() {
    //cout << "WhiteStone\n";
    String path = "./textures/stone_white.png";
    float factor = 0.88;
    fstream file;
    try {
        file.open(path, ios::in);
        if(file.good() == true) {
            stoneTexture.loadFromFile(path);
            stoneSprite.setTexture(stoneTexture);
            stoneSprite.setScale(factor, factor);
        } else {
            throw(logic_error("Could not load texture"));
        }
    } catch (logic_error x) {
        cout << "Could not load stone texture";
    }
}

Sprite WhiteStone::getStoneTexture() {
    //cout << "W\n";
    return stoneSprite;
}


