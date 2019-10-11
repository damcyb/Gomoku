//
// Created by FliCom on 11/10/2019.
//

#ifndef PROGRAMOWANIEOBIEKTOWEC_BOARD_H
#define PROGRAMOWANIEOBIEKTOWEC_BOARD_H

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <string>

using namespace sf;

class Board {
private:
    Texture board;
    Sprite boardPNG;
public:
    void loadBoardTexture();
    Sprite getBoardTexture();
};


#endif //PROGRAMOWANIEOBIEKTOWEC_BOARD_H
