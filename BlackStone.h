//
// Created by FliCom on 16/10/2019.
//

#ifndef PROGRAMOWANIEOBIEKTOWEC_BLACKSTONE_H
#define PROGRAMOWANIEOBIEKTOWEC_BLACKSTONE_H


#include "Stone.h"
#include <iostream>

class BlackStone: public Stone {
private:
    Texture stoneTexture;
    Sprite stoneSprite;
public:
    BlackStone();
    void loadStoneTexture();
    Sprite getStoneTexture();
};

#endif //PROGRAMOWANIEOBIEKTOWEC_BLACKSTONE_H
