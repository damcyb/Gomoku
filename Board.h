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
    Texture playersTableTexture;
    Texture playersUnderlineTexture;
    Sprite boardPNG;
    Sprite playersTableSprite;
    Sprite playersUnderlineSprite;

public:
    void loadBoardTexture();
    void loadPlayersTableTexture();
    void loadPlayersUnderlineTexture();
    void setPlayersUnderlinePosition(int x, int y);
    Sprite getBoardTexture();
    Sprite getPlayersTableTexture();
    Sprite getPlayersUnderlineTexture();
};


#endif //PROGRAMOWANIEOBIEKTOWEC_BOARD_H
