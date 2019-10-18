//
// Created by FliCom on 16/10/2019.
//

#ifndef PROGRAMOWANIEOBIEKTOWEC_CONSTANTS_H
#define PROGRAMOWANIEOBIEKTOWEC_CONSTANTS_H


static class Constants {
public:
    static const int BOARD_SIZE = 1050;
    static const int LEFT_BOARDER = 24;
    static const int RIGHT_BOARDER = BOARD_SIZE - 24;
    static const int UP_BOARDER = 24;
    static const int DOWN_BOARDER = BOARD_SIZE - 24;
    static const int BLANK_FIELD = 0;
    static const int WHITE_FIELD = 1;
    static const int BLACK_FIELD = 2;
    static const int WHITE_WIN = 0;
    static const int BLACK_WIN = 1;
    static const int DRAW = 2;
};


#endif //PROGRAMOWANIEOBIEKTOWEC_CONSTANTS_H
