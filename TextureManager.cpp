//
// Created by FliCom on 11/10/2019.
//

#include "TextureManager.h"

using namespace sf;

void TextureManager::spriteManager() {
    if (!boardTexture.loadFromFile("./textures/board.png"))
    {
        throw std::logic_error("Could not load board texture");
    }
    if (!whiteStoneTexture.loadFromFile("./textures/stone_white.png"))
    {
        throw std::logic_error("Could not load board texture");
    }
    if (!blackStoneTexture.loadFromFile("./textures/stone_black.png"))
    {
        throw std::logic_error("Could not load board texture");
    }

    boardTexture.loadFromFile("./textures/board.png");
    whiteStoneTexture.loadFromFile("./textures/stone_white.png");
    blackStoneTexture.loadFromFile("./textures/stone_black.png");
}

Texture TextureManager::getboardTexture() {
    return boardTexture;
}
