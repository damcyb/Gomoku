//
// Created by FliCom on 11/10/2019.
//

#ifndef PROGRAMOWANIEOBIEKTOWEC_TEXTUREMANAGER_H
#define PROGRAMOWANIEOBIEKTOWEC_TEXTUREMANAGER_H

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <string>

using namespace sf;

class TextureManager {
public:
    Texture boardTexture;
    Texture whiteStoneTexture;
    Texture blackStoneTexture;
    void spriteManager();
    Texture getboardTexture();
};


#endif //PROGRAMOWANIEOBIEKTOWEC_TEXTUREMANAGER_H
