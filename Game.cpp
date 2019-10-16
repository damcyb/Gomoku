//
// Created by FliCom on 11/10/2019.
//

#include "Game.h"
#include "TextureManager.h"

#include <iostream>

using namespace sf;
using namespace std;

Game::Game():applicationWindow(
        VideoMode(this->screenWidth, this->screenHeight, 32), applicationTitle) {
}

void Game::displayWindow() {

    bool whiteMove = true;

    BoardLogic boardLogic;

    RectangleShape fieldHighlight;

    Board board;
    board.loadBoardTexture();

    Sprite blackStoneSprite;
    Sprite whiteStoneSprite;

    Sprite stonesArray[324];
    int stoneCounter = 0;

    Stone whiteStone = WhiteStone();
    Stone blackStone = BlackStone();

    whiteStone.loadStoneTexture("./textures/stone_white.png");
    blackStone.loadStoneTexture("./textures/stone_black.png");

    whiteStoneSprite = whiteStone.getStoneTexture();
    blackStoneSprite = blackStone.getStoneTexture();

    while( applicationWindow.isOpen()) {

        Vector2i position = Mouse::getPosition(applicationWindow);

        Event event;
        while( applicationWindow.pollEvent( event )) {
            if (event.type == Event::Closed)
                applicationWindow.close();

            if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
                applicationWindow.close();

            if (event.type == Event::MouseButtonPressed && event.mouseButton.button == Mouse::Middle)
                applicationWindow.close();

            if (event.type == Event::MouseButtonPressed) {
                if (event.key.code == Mouse::Left) {
                    if (insideGameField(position.x, position.y)) {
                        if (boardLogic.isMarked(position.x, position.y)) {
                            if (whiteMove) {

                                stonesArray[stoneCounter] = whiteStoneSprite;
                                stonesArray[stoneCounter].setPosition(56 * ((position.x - 21) / 56) + 24,
                                                                      56 * ((position.y - 21) / 56) + 24);
                                stoneCounter++;
                                whiteMove = false;

                            } else {
                                stonesArray[stoneCounter] = blackStoneSprite;
                                stonesArray[stoneCounter].setPosition(56 * ((position.x - 21) / 56) + 24,
                                                                      56 * ((position.y - 21) / 56) + 24);
                                stoneCounter++;
                                whiteMove = true;
                            }
                            boardLogic.transformToArrayIndex(
                                    stonesArray[stoneCounter - 1].getPosition().x,
                                    stonesArray[stoneCounter - 1].getPosition().y,
                                    !whiteMove);
                            //boardLogic.print();
                        }
                    }
                }
            }

            if(event.type == Event::MouseButtonReleased) {
                if (event.key.code == Mouse::Left) {
                    boardLogic.checkWinSituation();
                }
            }
            /* Cala plansza ma wymiar 1008 x 1008 jednostek i ma 18x18 pol. Liczby dopasowano w taki sposob, aby
             * podswietlajacy pole prostokat znajdowal sie na wlasciwym polu
             * 56 - rozm pojedynczego boku pola
             * 21 - przesuniecie o grubosc ramki (obwodki pola do gry)
             * 26 - polowa rozmiaru pola +- korekta ustawienia
             * 53 - bok pola pomniejszony tak, zeby podswietlenie nie zaslanialo krawedzi pola
             */
            if(event.type == Event::MouseMoved) {
                if(insideGameField(position.x, position.y)) {
                    fieldHighlight = RectangleShape(Vector2f(53,53));
                    fieldHighlight.setPosition(56 * ((position.x - 21)/ 56) + 26, 56 * ((position.y - 21) / 56) + 26);
                    fieldHighlight.setFillColor(Color(30, 30, 30, 80) );
                }
                else {
                    fieldHighlight = RectangleShape(Vector2f(0,0));
                }
            }
        }

        applicationWindow.clear();
        applicationWindow.draw(board.getBoardTexture());
        for(int i = 0; i < 324; i++) {
            applicationWindow.draw(stonesArray[i]);
        }
        applicationWindow.draw(fieldHighlight);
        applicationWindow.display();

    }
}

bool Game::insideGameField(int x, int y) {
    Constants constants;
    if(x > constants.LEFT_BOARDER && x < constants.RIGHT_BOARDER
       && y > constants.UP_BOARDER && y < constants.DOWN_BOARDER) {
        return true;
    } else {
        return false;
    }
}

