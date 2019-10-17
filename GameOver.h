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
    Texture whiteWinTexture;
    Texture blackWinTexture;
    Sprite whiteWinSprite;
    Sprite blackWinSprite;
public:
    void loadWhiteWinTexture();
    void loadBlackWinTexture();
    Sprite getWhiteWinTexture();
    Sprite getBlackWinTexture();
};


#endif //PROGRAMOWANIEOBIEKTOWEC_GAMEOVER_H
