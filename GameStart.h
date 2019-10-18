//
// Created by FliCom on 18/10/2019.
//

#ifndef PROGRAMOWANIEOBIEKTOWEC_GAMESTART_H
#define PROGRAMOWANIEOBIEKTOWEC_GAMESTART_H

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

using namespace sf;

class GameStart {
private:
    Texture startGameTexture;
    Sprite startGameSprite;
public:
    void loadGameStartTexture();
    Sprite getGameStartTexture();
};


#endif //PROGRAMOWANIEOBIEKTOWEC_GAMESTART_H
