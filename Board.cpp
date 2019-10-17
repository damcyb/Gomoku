//
// Created by FliCom on 11/10/2019.
//

#include "Board.h"
#include "TextureManager.h"

#include <iostream>

using namespace std;

void Board::loadBoardTexture() {
    double factor = 2.43 * 0.96;
    board.loadFromFile("./textures/board.png");
    //board = textureManager.getboardTexture();
    boardPNG.setTexture(board);
    boardPNG.setScale(factor,factor);
}

void Board::loadPlayersTableTexture() {

    float factor = 0.6;
    playersTableTexture.loadFromFile("./textures/players_table.png");
    playersTableSprite.setTexture(playersTableTexture);
    playersTableSprite.setPosition(1040, 0);
    playersTableSprite.setScale(factor, factor);
}

void Board::loadPlayersUnderlineTexture() {
    float factor = 0.55;
    playersUnderlineTexture.loadFromFile("./textures/players_underline.png");
    playersUnderlineSprite.setTexture(playersUnderlineTexture);
    playersUnderlineSprite.setScale(factor, factor);
}

void Board::setPlayersUnderlinePosition(int x, int y) {
    playersUnderlineSprite.setPosition(x, y);
}

Sprite Board::getBoardTexture() {
    return boardPNG;
}

Sprite Board::getPlayersTableTexture() {
    return playersTableSprite;
}

Sprite Board::getPlayersUnderlineTexture() {
    return playersUnderlineSprite;
}