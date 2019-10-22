//
// Created by FliCom on 11/10/2019.
//

#include "FileManager.h"
#include <iostream>
#include <fstream>


using namespace std;

void FileManager::writeTitleToFile() {

    file.open("GameLog.txt", ios::out);
    if(file.good() == true) {
        file << "# GOMOKU GAMELOG #" << endl;
        file.close();
    }
}

void FileManager::writePositionToFile(bool whiteMove, int x, int y) {
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

void FileManager::readGameLogFromFile() {
    string line;
    try {
        file.open("GameLog.txt", ios::in);
        if(file.good() == true) {
            while(!file.eof())
            {
                getline(file, line);
                cout << line << endl;
            }
            file.close();
        } else {
            throw logic_error("Open file error");
        }
    } catch (logic_error x){
        cout << "Open file error" << endl;
    }

}


