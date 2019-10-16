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

    board.loadBoardTexture();
    stone.loadStoneTexture();
    stoneSprite = stone.getStoneTexture();
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
//                    if(stoneSprite.getGlobalBounds().contains(position.x,position.y)) {
//                        isMove = true;
//                        dx = position.x - stoneSprite.getPosition().x;
//                        dy = position.y - stoneSprite.getPosition().y;
//                    }
                    isMove = true;
                    Stone stone1;
                    Sprite stoneSprite1;
                    stone1.loadStoneTexture();
                    stoneSprite1 = stone1.getStoneTexture();
                    //stoneSprite1.setPosition()
                }
            }
            if(event.type == Event::MouseButtonReleased) {
                if (event.key.code == Mouse::Left) {
                    isMove = false;
                    Vector2f p = stoneSprite.getPosition() + Vector2f(size/2, size/2);
                    Vector2f newPos = Vector2f(size * int(p.x / size), size * int(p.y / size));
                    stoneSprite.setPosition(newPos);

                }
            }
            if(isMove) {
                stoneSprite.setPosition(position.x - dx, position.y - dy);
            }
        }
        applicationWindow.clear();
        applicationWindow.draw(board.getBoardTexture());
        applicationWindow.draw(stoneSprite);
        applicationWindow.display();
    }
}
