//
// Created by FliCom on 16/10/2019.
//

#include "BlackStone.h"

BlackStone::BlackStone() {

}

void BlackStone::loadStoneTexture() {
    //cout << "BlackStone\n";
    String path = "./textures/stone_black.png";
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

Sprite BlackStone::getStoneTexture() {
    //cout << "B\n";
    return stoneSprite;
}
