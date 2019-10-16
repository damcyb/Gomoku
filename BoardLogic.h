//
// Created by FliCom on 16/10/2019.
//

#ifndef PROGRAMOWANIEOBIEKTOWEC_BOARDLOGIC_H
#define PROGRAMOWANIEOBIEKTOWEC_BOARDLOGIC_H

#include "Constants.h"

class BoardLogic {

private:
    Constants constants;
    int boardFieldsArray[18][18];

public:

    BoardLogic();
    int transformToArrayIndex(int x, int y, bool isTurnWhite);
    //void markFieldAsDisabled(int i, int j);
    bool isMarked(int i, int j);
    void print();
};


#endif //PROGRAMOWANIEOBIEKTOWEC_BOARDLOGIC_H
