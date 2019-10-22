//
// Created by FliCom on 11/10/2019.
//

#include "Board.h"
#include <iostream>

using namespace std;

void Board::loadBoardTexture() {
    float factor = 2.43 * 0.96;
    fstream file;
    try {
        file.open("./textures/board.png", ios::in);
        if(file.good() == true) {
            boardTexture.loadFromFile(("./textures/board.png"));
            boardSprite.setTexture(boardTexture);
            boardSprite.setScale(factor, factor);
            isBoardSuccessfulLoaded = true;
        } else {
            isBoardSuccessfulLoaded = false;
            throw(logic_error("Could not load texture"));
        }
    } catch (logic_error x) {
        cout << "Could not load board texture";
    }
}

void Board::loadPlayersTableTexture() {
    float factor = 0.6;
    fstream file;
    try {
        file.open("./textures/players_table.png", ios::in);
        if(file.good() == true) {
            playersTableTexture.loadFromFile("./textures/players_table.png");
            playersTableSprite.setTexture(playersTableTexture);
            playersTableSprite.setPosition(1040, 0);
            playersTableSprite.setScale(factor, factor);
        } else {
            throw(logic_error("Could not load texture"));
        }
    } catch (logic_error x) {
        cout << "Could not load players table texture";
    }
}

void Board::loadPlayersUnderlineTexture() {
    float factor = 0.55;
    fstream file;
    try {
        file.open("./textures/players_underline.png", ios::in);
        if(file.good() == true) {
            playersUnderlineTexture.loadFromFile("./textures/players_underline.png");
            playersUnderlineSprite.setTexture(playersUnderlineTexture);
            playersUnderlineSprite.setScale(factor, factor);
        } else {
            throw(logic_error("Could not load texture"));
        }
    } catch (logic_error x) {
        cout << "Could not load players underline texture";
    }
}

void Board::setPlayersUnderlinePosition(int x, int y) {
    playersUnderlineSprite.setPosition(x, y);
}

Sprite Board::getBoardTexture() {
    return boardSprite;
}

Sprite Board::getPlayersTableTexture() {
    return playersTableSprite;
}

Sprite Board::getPlayersUnderlineTexture() {
    return playersUnderlineSprite;
}

bool Board::getIsBoolSuccessfulLoaded() {
    return isBoardSuccessfulLoaded;
}