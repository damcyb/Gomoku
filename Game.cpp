//
// Created by FliCom on 11/10/2019.
//

#include "Game.h"
#include "FileManager.h"

#include <iostream>

using namespace sf;
using namespace std;

Game::Game():applicationWindow(
        VideoMode(this->screenWidth, this->screenHeight, 32), applicationTitle) {
}

void Game::displayGamePage() {

    bool whiteMove = true;
    bool gameWon = false;
    bool draw = false;

    BoardLogic boardLogic;

    RectangleShape fieldHighlight;

    Board board;
    board.loadBoardTexture();
    board.loadPlayersTableTexture();
    board.loadPlayersUnderlineTexture();

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

    fileManager.writeTitleToFile();

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
                    if(!gameWon) {
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
                                fileManager.writePositionToFile(!whiteMove, position.x, position.y);
                            }
                        }
                    }
                }
            }

            if(event.type == Event::MouseButtonReleased) {
                if (event.key.code == Mouse::Left) {
                    if(boardLogic.checkWinSituation()) {
                        gameWon = true;
                    } else {
                        if(stoneCounter == 324) {
                            draw = true;
                        }
                    }
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
                if(!gameWon) {
                    if (insideGameField(position.x, position.y)) {
                        fieldHighlight = RectangleShape(Vector2f(53, 53));
                        fieldHighlight.setPosition(56 * ((position.x - 21) / 56) + 26,
                                                   56 * ((position.y - 21) / 56) + 26);
                        fieldHighlight.setFillColor(Color(30, 30, 30, 80));
                    } else {
                        fieldHighlight = RectangleShape(Vector2f(0, 0));
                    }
                }
            }
        }


        applicationWindow.clear();

        applicationWindow.draw(board.getPlayersTableTexture());
        applicationWindow.draw(board.getBoardTexture());

        if(whiteMove) {
            board.setPlayersUnderlinePosition(1140,360);
        } else {
            board.setPlayersUnderlinePosition(1140,815);
        }
        applicationWindow.draw(board.getPlayersUnderlineTexture());
        for(int i = 0; i < 324; i++) {
            applicationWindow.draw(stonesArray[i]);
        }
        applicationWindow.draw(fieldHighlight);
        if(gameWon) {

            if(!whiteMove) { //po ostatnim ruchu bialych whiteMove zmieni wartosc

                displayGameOverPage(constants.WHITE_WIN);
                //applicationWindow.draw(gameOver.getGameOverText());
            } else {
                displayGameOverPage(constants.BLACK_WIN);
            }
        }
        if(draw) {
            displayGameOverPage(constants.DRAW);
        }

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

void Game::displayGameStartPage() {
    int factor = 2;
    Texture startGameTexture;
    Sprite startGameSprite;

    startGameTexture.loadFromFile("./textures/start-the-game.jpg");
    startGameSprite.setTexture(startGameTexture);
    startGameSprite.setPosition(-100,-200);
    startGameSprite.setScale(factor,factor);

    Text text;
    Font font;
    font.loadFromFile("./textures/calibri.ttf");
    text.setString("Hello");
    text.setFillColor(Color::Yellow);
    text.setCharacterSize(100);

    while( applicationWindow.isOpen()) {
        Event event;
        while( applicationWindow.pollEvent( event )) {
            if (event.type == Event::Closed)
                applicationWindow.close();

            if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
                applicationWindow.close();

            if (event.type == Event::MouseButtonPressed && event.mouseButton.button == Mouse::Middle)
                applicationWindow.close();

            if (event.type == Event::MouseButtonPressed && event.mouseButton.button == Mouse::Left)
                displayGamePage();

            if (event.type == Event::KeyPressed && event.key.code != Keyboard::Escape )
                displayGamePage();
        }
        applicationWindow.clear();
        applicationWindow.draw(startGameSprite);
        applicationWindow.draw(text);
        applicationWindow.display();
    }
}

void Game::displayGameOverPage(int gameResult) {
    GameOver gameOver;
    gameOver.loadWhiteWinTexture();
    gameOver.loadBlackWinTexture();
    gameOver.loadDrawTexture();
    gameOver.loadGameLogCommunicate();

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

            if (event.type == Event::MouseButtonPressed && event.mouseButton.button == Mouse::Left) {
                if (playAgainButtonClicked(position.x, position.y)) {
                    displayGamePage();
                }
                if (gameLogButtonClicked(position.x, position.y)) {
                    displayGameLogPage();
                }
            }
        }
        applicationWindow.clear();
        if(gameResult == constants.WHITE_WIN){
            applicationWindow.draw(gameOver.getWhiteWinTexture());
        }
        else if(gameResult == constants.BLACK_WIN) {
            applicationWindow.draw(gameOver.getBlackWinTexture());
        }
        else if(gameResult == constants.DRAW) {
            applicationWindow.draw(gameOver.getDrawTexture());
        }
        if(gameLogOpen) {
            applicationWindow.draw(gameOver.getGameLocCommunicate());
        }
        applicationWindow.display();
    }
}

bool Game::playAgainButtonClicked(int x, int y) {
    if(x > 202 && x < 642 && y > 824 && y < 950) {
        return true;
    } else {
        return false;
    }
}

bool Game::gameLogButtonClicked(int x, int y) {
    if(x > 970 && x < 1418 && y > 818 && y < 950) {
        return true;
    } else {
        return false;
    }
}

void Game::displayGameLogPage() {
    gameLogOpen = true;
    fileManager.openGameLog();
}




