//
// Created by FliCom on 11/10/2019.
//

#include "Board.h"
#include "TextureManager.h"

#include <iostream>

using namespace std;

void Board::loadBoardTexture() {
    TextureManager textureManager;
    board.loadFromFile("./textures/board.png");
    //board = textureManager.getboardTexture();
    boardPNG.setTexture(board);
    boardPNG.setScale(2.43,2.43);
}

Sprite Board::getBoardTexture() {
    return boardPNG;
}