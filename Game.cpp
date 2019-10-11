//
// Created by FliCom on 11/10/2019.
//

#include "Game.h"

using namespace sf;

Game::Game():applicationWindow(
        VideoMode(this->screenWidth, screenHeight, 32), applicationTitle) {
}

void Game::displayWindow() {
    board.loadBoardTexture();
    while( applicationWindow.isOpen()) {
        Event event;
        while( applicationWindow.pollEvent( event )){
            if( event.type == sf::Event::Closed )
                applicationWindow.close();

            if( event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape )
                applicationWindow.close();

            if( event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Middle )
                applicationWindow.close();

        }
        applicationWindow.draw(board.getBoardTexture());
        applicationWindow.display();
    }
}
