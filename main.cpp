#include <SFML/Graphics.hpp>
#include "Board.h"
#include "Game.h"

using namespace sf;

int main()
{
    Game game;
    game.displayWindow();
//    sf::Texture board;
//    board.loadFromFile("./textures/board.png");
//
//    sf::Sprite painting;
//    painting.setTexture(board);
//    painting.setPosition(200,200);
//
//    sf::RenderWindow applicationWindow( sf::VideoMode( 800, 600, 32 ), "Kurs SFML 2.0 - http://cpp0x.pl" );
//    while( applicationWindow.isOpen() )
//    {
//        sf::Event event;
//        while( applicationWindow.pollEvent( event ) )
//        {
//            if( event.type == sf::Event::Closed )
//                applicationWindow.close();
//
//            if( event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape )
//                applicationWindow.close();
//
//            if( event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Middle )
//                applicationWindow.close();
//
//        }
//        applicationWindow.draw(painting);
//        applicationWindow.display();
//    }
    return 0;
}