//
// Created by FliCom on 16/10/2019.
//

#include "BoardLogic.h"
#include <iostream>

using namespace std;

BoardLogic::BoardLogic() {
    for(int i = 0; i < 18; i++) {
        for(int j = 0; j < 18; j++) {
            this->boardFieldsArray[i][j] = constants.BLANK_FIELD;
        }
    }
}

int BoardLogic::transformToArrayIndex(int x, int y, bool whiteMove) {

    int row = (x - 21) / 56;
    int col = (y - 21) / 56;
    if(whiteMove && boardFieldsArray[row][col] == constants.BLANK_FIELD) {
        boardFieldsArray[row][col] = constants.WHITE_FIELD;
    }
    if(!whiteMove && boardFieldsArray[row][col] == constants.BLANK_FIELD) {
        boardFieldsArray[row][col] = constants.BLACK_FIELD;
    }
}

bool BoardLogic::isMarked(int x, int y) {
    int row = (x - 21) / 56;
    int col = (y - 21) / 56;
    if(boardFieldsArray[row][col] == constants.BLANK_FIELD) {
        return true;
    } else {
        return false;
    }
}

void BoardLogic::print() {
    for(int i = 0; i < 18; i++) {
        for(int j = 0; j < 18; j++) {
            cout << boardFieldsArray[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl << endl;
}