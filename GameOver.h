//
// Created by FliCom on 16/10/2019.
//

#ifndef PROGRAMOWANIEOBIEKTOWEC_GAMEOVER_H
#define PROGRAMOWANIEOBIEKTOWEC_GAMEOVER_H

#include <SFML/Graphics.hpp>
#include <string>
#include <fstream>
#include <iostream>

using namespace sf;

class GameOver {
private:
    Texture whiteWinTexture;
    Texture blackWinTexture;
    Texture drawTexture;
    Sprite whiteWinSprite;
    Sprite blackWinSprite;
    Sprite drawSprite;
public:
    void loadWhiteWinTexture();
    void loadBlackWinTexture();
    void loadDrawTexture();
    Sprite getWhiteWinTexture();
    Sprite getBlackWinTexture();
    Sprite getDrawTexture();
};

#endif //PROGRAMOWANIEOBIEKTOWEC_GAMEOVER_H
