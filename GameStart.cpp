//
// Created by FliCom on 18/10/2019.
//

#include "GameStart.h"

using namespace std;

void GameStart::loadGameStartTexture() {
    int factor = 2;
    fstream file;
    try {
        file.open("./textures/start-the-game.jpg", ios::in);
        if(file.good() == true) {
            startGameTexture.loadFromFile("./textures/start-the-game.jpg");
            startGameSprite.setTexture(startGameTexture);
            startGameSprite.setPosition(-100,-200);
            startGameSprite.setScale(factor,factor);
        } else {
            throw(logic_error("Could not load texture"));
        }
    } catch (logic_error x) {
        cout << "Could not load game start texture";
    }
}

Sprite GameStart::getGameStartTexture() {
    return startGameSprite;
}
