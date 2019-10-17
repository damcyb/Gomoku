//
// Created by FliCom on 16/10/2019.
//

#include "GameOver.h"

GameOver::GameOver() {

    gameOverContainer.setSize(Vector2f(12 * 56 - 3, 8 * 56 - 3));
    gameOverContainer.setPosition(Vector2f(194, 306));
    gameOverContainer.setFillColor(Color(100, 150, 200, 250));



    //gameOverText.setPosition(Vector2f(230, 360));
}

Font GameOver::loadFont(const String & path) {
    font.loadFromFile(path);
    gameOverText.setString("COS");
    gameOverText.setFont(font);
    gameOverText.setCharacterSize(240);
    gameOverText.setFillColor(sf::Color::Red);
    gameOverText.setStyle(sf::Text::Bold | sf::Text::Underlined);
    gameOverText.setPosition(Vector2f(220,360));

}

RectangleShape GameOver::getGameOverContainter() {
    return gameOverContainer;
}

Text GameOver::getGameOverText() {
    return gameOverText;
}