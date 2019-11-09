//
// Created by FliCom on 16/10/2019.
//

#ifndef PROGRAMOWANIEOBIEKTOWEC_WHITESTONE_H
#define PROGRAMOWANIEOBIEKTOWEC_WHITESTONE_H


#include "Stone.h"

class WhiteStone: public Stone {
private:
    Texture stoneTexture;
    Sprite stoneSprite;
public:
    WhiteStone();
    void loadStoneTexture();
    Sprite getStoneTexture();
};

#endif //PROGRAMOWANIEOBIEKTOWEC_WHITESTONE_H
