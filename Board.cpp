//
// Created by FliCom on 11/10/2019.
//

#include "Board.h"

#include <iostream>

using namespace std;

void Board::loadBoardTexture() {
    board.loadFromFile("./textures/board.png");
    boardPNG.setTexture(board);
    boardPNG.setScale(2.43,2.43);
}

Sprite Board::getBoardTexture() {
    return boardPNG;
}