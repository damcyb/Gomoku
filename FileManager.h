//
// Created by FliCom on 11/10/2019.
//

#ifndef PROGRAMOWANIEOBIEKTOWEC_FILEMANAGER_H
#define PROGRAMOWANIEOBIEKTOWEC_FILEMANAGER_H

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <string>
#include <fstream>

using namespace sf;
using namespace std;

class FileManager {
private:
    fstream file;
public:
    void writePositionToFile(bool whiteMove, int x, int y);
    void writeTitleToFile();
    void readGameLogFromFile();
};


#endif //PROGRAMOWANIEOBIEKTOWEC_FILEMANAGER_H
