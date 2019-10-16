//
// Created by FliCom on 11/10/2019.
//

#ifndef PROGRAMOWANIEOBIEKTOWEC_STONE_H
#define PROGRAMOWANIEOBIEKTOWEC_STONE_H

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <string>

using namespace sf;

class Stone {
private:
    double xCoord;
    double yCoord;
    String color;
    Texture stoneTexture;
    Sprite stonePNG;
public:
    double getXCoord() const;

    void setXCoord(double xCoord);

    double getYCoord() const;

    void setYCoord(double yCoord);

    const String &getColor() const;

    void setColor(const String &color);

    void loadStoneTexture(const String &path);

    const Sprite &getStoneTexture() const;

    void setSpritePosition(const int &x, const int &y);
};


#endif //PROGRAMOWANIEOBIEKTOWEC_STONE_H
