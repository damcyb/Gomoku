//
// Created by FliCom on 11/10/2019.
//

#include "Stone.h"
#include <iostream>



void Stone::loadStoneTexture(const String &path) {
    float factor = 0.88;
    stoneTexture.loadFromFile(path);
    //board = textureManager.getboardTexture();
    stonePNG.setTexture(stoneTexture);
    stonePNG.setScale(factor, factor);
}

const Sprite &Stone::getStoneTexture() const {
    return stonePNG;
}

double Stone::getXCoord() const {
    return xCoord;
}

void Stone::setXCoord(double xCoord) {
    this->xCoord = xCoord;
}

double Stone::getYCoord() const {
    return yCoord;
}

void Stone::setYCoord(double yCoord) {
    this->yCoord = yCoord;
}

const String &Stone::getColor() const {
    return color;
}

void Stone::setColor(const String &color) {
    this->color = color;
}

void Stone::setSpritePosition(const int &x, const int &y) {
    stonePNG.setPosition(x, y);
    std::cout << stonePNG.getPosition().x << stonePNG.getPosition().y << std::endl;
}
