//
// Created by FliCom on 11/10/2019.
//

#include "FileManager.h"
#include <iostream>
#include <fstream>


using namespace std;

void FileManager::writeTitleToFile() {
    fstream file;

    file.open("GameLog.txt", ios::out);
    if(file.good() == true) {
        file << "# GOMOKU GAMELOG #" << endl;
        file.close();
    }
}

void FileManager::writePositionToFile(bool whiteMove, int x, int y) {
    fstream file;
    int row = (y - 21) / 56;
    int col = (x - 21) / 56;

    file.open("GameLog.txt", ios::out | ios::app);
    if(file.good() == true) {
        if(whiteMove) {
            file << "W: row " << row + 1 << " col " << col + 1 << endl;
        } else {
            file << "B: row " << row + 1 << " col " << col + 1 << endl;
        }
        file.close();
    }
}

void FileManager::openGameLog() {
    string command = "open ./GameLog.txt";
    system(command.c_str());
}

