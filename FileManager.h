//
// Created by FliCom on 11/10/2019.
//

#ifndef PROGRAMOWANIEOBIEKTOWEC_FILEMANAGER_H
#define PROGRAMOWANIEOBIEKTOWEC_FILEMANAGER_H

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <string>

using namespace sf;

class FileManager {
private:

public:
    void writePositionToFile(bool whiteMove, int x, int y);
    void writeTitleToFile();
    void loadFromFile();
    void openGameLog();
};


#endif //PROGRAMOWANIEOBIEKTOWEC_FILEMANAGER_H
