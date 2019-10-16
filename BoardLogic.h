//
// Created by FliCom on 16/10/2019.
//

#ifndef PROGRAMOWANIEOBIEKTOWEC_BOARDLOGIC_H
#define PROGRAMOWANIEOBIEKTOWEC_BOARDLOGIC_H

#include "Constants.h"
#include "WinWays.h"

class BoardLogic {

private:
    Constants constants;
    WinWays winWays;
    int boardFieldsArray[18][18];

public:

    BoardLogic();
    int transformToArrayIndex(int x, int y, bool isTurnWhite);
    //void markFieldAsDisabled(int i, int j);
    bool isMarked(int i, int j);
    void print();
    int checkWinSituation();
};


#endif //PROGRAMOWANIEOBIEKTOWEC_BOARDLOGIC_H
