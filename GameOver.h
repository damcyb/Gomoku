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
    Texture drawTexture;
    Texture gameLogCommunicateTexture;
    Sprite whiteWinSprite;
    Sprite blackWinSprite;
    Sprite drawSprite;
    Sprite gameLogCommunicateSprite;
public:
    void loadWhiteWinTexture();
    void loadBlackWinTexture();
    void loadDrawTexture();
    void loadGameLogCommunicate();
    Sprite getWhiteWinTexture();
    Sprite getBlackWinTexture();
    Sprite getDrawTexture();
    Sprite getGameLocCommunicate();
};


#endif //PROGRAMOWANIEOBIEKTOWEC_GAMEOVER_H
