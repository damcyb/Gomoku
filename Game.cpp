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

    bool isMove = false;
    float dx = 0;
    float dy = 0;

    int size = 56;
    RectangleShape fieldHighlight;
    int coordCorrectionX = 30;
    int coordCorrectionY = 32;
    Board board;
    board.loadBoardTexture();

    Sprite blackStoneSprite;
    Sprite whiteStoneSprite;

    Sprite whiteStonesArray[162];
    int whiteCounter = 0;

    Sprite blackStonesArray[162];
    int blackCounter = 0;

    Stone whiteStone = WhiteStone();
    Stone blackStone = BlackStone();

    whiteStone.loadStoneTexture("./textures/stone_white.png");
    blackStone.loadStoneTexture("./textures/stone_black.png");

    whiteStoneSprite = whiteStone.getStoneTexture();
    blackStoneSprite = blackStone.getStoneTexture();

    while( applicationWindow.isOpen()) {

        Vector2i position = Mouse::getPosition(applicationWindow);

        Event event;
        while( applicationWindow.pollEvent( event )){
            if( event.type == Event::Closed )
                applicationWindow.close();

            if( event.type == Event::KeyPressed && event.key.code == Keyboard::Escape )
                applicationWindow.close();

            if( event.type == Event::MouseButtonPressed && event.mouseButton.button == Mouse::Middle )
                applicationWindow.close();

            if(event.type == Event::MouseButtonPressed) {
                if(event.key.code == Mouse::Left) {
                    isMove = true;
                    dx = position.x;
                    dy = position.y;

                    blackStonesArray[blackCounter] = blackStoneSprite;
                    blackStonesArray[blackCounter].setPosition(position.x - coordCorrectionX, position.y - coordCorrectionY);
                    blackCounter++;

                    cout << position.x << "  " << position.y << endl;

//                    Vector2f p = blackStoneSprite.getPosition() + Vector2f(size/2, size/2);
//                    Vector2f newPos = Vector2f(size * int(p.x / size), size * int(p.y / size));
//                    blackStonesArray[blackCounter].setPosition(newPos);
//                    blackCounter++;
                }
            }
            if(event.type == Event::MouseButtonReleased) {
                if (event.key.code == Mouse::Left) {
                    isMove = false;
//                    Vector2f p = blackStoneSprite.getPosition() + Vector2f(size/2, size/2);
//                    Vector2f newPos = Vector2f(size * int(p.x / size), size * int(p.y / size));
//                    blackStoneSprite.setPosition(newPos);
                }
            }
            if(isMove) {
                blackStoneSprite.setPosition(position.x - dx, position.y - dy);
            }
            if(event.type == Event::MouseMoved) {
                fieldHighlight = RectangleShape(Vector2f(53,53));
                fieldHighlight.setPosition(56 * ((position.x - 21)/ 56) + 26, 56 * ((position.y - 21) / 56) + 26);
                fieldHighlight.setFillColor(Color(30, 30, 30, 80) );
            }
        }
        applicationWindow.clear();
        applicationWindow.draw(board.getBoardTexture());
        for(int i = 0; i < 162; i++) {
            applicationWindow.draw(blackStonesArray[i]);
            applicationWindow.draw(whiteStonesArray[i]);
        }
        applicationWindow.draw(fieldHighlight);
        applicationWindow.display();
    }
}
