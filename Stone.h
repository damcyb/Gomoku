//
// Created by FliCom on 11/10/2019.
//

#ifndef PROGRAMOWANIEOBIEKTOWEC_STONE_H
#define PROGRAMOWANIEOBIEKTOWEC_STONE_H

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <string>

using namespace sf;

class Stone {
private:
    Texture stoneTexture;
    Sprite stonePNG;
public:
    void loadStoneTexture(String path);
    Sprite getStoneTexture();
};

#endif //PROGRAMOWANIEOBIEKTOWEC_STONE_H
