//
// Created by FliCom on 11/10/2019.
//

#include "Stone.h"

void Stone::loadStoneTexture() {
    String path = "./textures/stone_white.png";
    cout << "Stone \n";
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

Sprite Stone::getStoneTexture(){
    return stoneSprite;
}
