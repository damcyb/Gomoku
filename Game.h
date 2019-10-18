//
// Created by FliCom on 11/10/2019.
//

#ifndef PROGRAMOWANIEOBIEKTOWEC_GAME_H
#define PROGRAMOWANIEOBIEKTOWEC_GAME_H

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <string>

#include "Board.h"
#include "Stone.h"
#include "WhiteStone.h"
#include "BlackStone.h"
#include "Constants.h"
#include "BoardLogic.h"
#include "GameOver.h"
#include "FileManager.h"

using namespace sf;

class Game: public RenderWindow {
private:
    int screenWidth = 1600;
    int screenHeight = 1050;
    String applicationTitle = "GOMOKU";
    RenderWindow applicationWindow;
    FileManager fileManager;
    Constants constants;
    bool gameLogOpen = false;
    bool insideGameField(int x, int y);
    bool playAgainButtonClicked(int x, int y);
    bool gameLogButtonClicked(int x, int y);
//    Sprite startGameSprite;
//    Texture startGameTexture;
    //Board board;
    //Stone stone;
    //Sprite stoneSprite;

public:
    Game();
    void displayGamePage();
    void displayGameStartPage();
    void displayGameOverPage(int gameResult);
    void displayGameLogPage();

};


#endif //PROGRAMOWANIEOBIEKTOWEC_GAME_H
