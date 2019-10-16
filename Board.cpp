//
// Created by FliCom on 11/10/2019.
//

#include "Board.h"
#include "TextureManager.h"

#include <iostream>

using namespace std;

void Board::loadBoardTexture() {
    double factor = 2.43 * 0.96;
    TextureManager textureManager;
    board.loadFromFile("./textures/board.png");
    //board = textureManager.getboardTexture();
    boardPNG.setTexture(board);
    boardPNG.setScale(factor,factor);
}

Sprite Board::getBoardTexture() {
    return boardPNG;
}