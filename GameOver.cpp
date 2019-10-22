//
// Created by FliCom on 16/10/2019.
//

#include "GameOver.h"

using namespace std;

void GameOver::loadWhiteWinTexture() {
    fstream file;
    try {
        file.open("./textures/game_over_white.jpg", ios::in);
        if(file.good() == true) {
            whiteWinTexture.loadFromFile("./textures/game_over_white.jpg");
            whiteWinSprite.setTexture(whiteWinTexture);
        } else {
            throw(logic_error("Could not load texture"));
        }
    } catch (logic_error x) {
        cout << "Could not load game over white texture";
    }

}

void GameOver::loadBlackWinTexture() {
    fstream file;
    try {
        file.open("./textures/game_over_black.jpg", ios::in);
        if(file.good() == true) {
            blackWinTexture.loadFromFile("./textures/game_over_black.jpg");
            blackWinSprite.setTexture(blackWinTexture);
        } else {
            throw(logic_error("Could not load texture"));
        }
    } catch (logic_error x) {
        cout << "Could not load game over black texture";
    }
}

void GameOver::loadDrawTexture() {
    fstream file;
    try {
        file.open("./textures/game_over_draw.jpg", ios::in);
        if(file.good() == true) {
            drawTexture.loadFromFile("./textures/game_over_draw.jpg");
            drawSprite.setTexture(drawTexture);
        } else {
            throw(logic_error("Could not load texture"));
        }
    } catch (logic_error x) {
        cout << "Could not load game over draw texture";
    }
}

Sprite GameOver::getWhiteWinTexture() {
    return whiteWinSprite;
}

Sprite GameOver::getBlackWinTexture() {
    return blackWinSprite;
}

Sprite GameOver::getDrawTexture() {
    return drawSprite;
}