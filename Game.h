//
// Created by FliCom on 11/10/2019.
//

#ifndef PROGRAMOWANIEOBIEKTOWEC_GAME_H
#define PROGRAMOWANIEOBIEKTOWEC_GAME_H

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <string>

#include "Board.h"

using namespace sf;

class Game: public RenderWindow {
private:
    int screenWidth = 1100;
    int screenHeight = 1100;
    String applicationTitle = "GOMOKU";
    RenderWindow applicationWindow;
    Board board;

public:
    Game();
    void displayWindow();
};


#endif //PROGRAMOWANIEOBIEKTOWEC_GAME_H
