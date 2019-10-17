//
// Created by FliCom on 16/10/2019.
//

#ifndef PROGRAMOWANIEOBIEKTOWEC_GAMEOVER_H
#define PROGRAMOWANIEOBIEKTOWEC_GAMEOVER_H

#include <SFML/Graphics.hpp>
#include <string>

using namespace sf;

class GameOver {
private:
    Font font;
    RectangleShape gameOverContainer;
    Text gameOverText;
public:
    GameOver();
    Font loadFont(const String &path);
    RectangleShape getGameOverContainter();
    Text getGameOverText();
    void whiteWin();
    void blackWin();
};


#endif //PROGRAMOWANIEOBIEKTOWEC_GAMEOVER_H
