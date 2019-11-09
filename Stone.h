//
// Created by FliCom on 11/10/2019.
//

#ifndef PROGRAMOWANIEOBIEKTOWEC_STONE_H
#define PROGRAMOWANIEOBIEKTOWEC_STONE_H

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <string>
#include <fstream>
#include <iostream>

using namespace sf;
using namespace std;

class Stone {
private:
    Texture stoneTexture;
    Sprite stoneSprite;
public:
    virtual void loadStoneTexture();
    virtual Sprite getStoneTexture();
};

#endif //PROGRAMOWANIEOBIEKTOWEC_STONE_H
