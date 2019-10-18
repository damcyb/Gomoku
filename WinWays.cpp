//
// Created by FliCom on 16/10/2019.
//

#include "WinWays.h"

using namespace std;

bool WinWays::horizontalTest(int board[18][18]){
    int boardInOneRow[324 + 18] = {9}; // na koncu kazdego wiersza dodaje 0, zeby oddzielic od siebie sasiednie wiersze
    int counter = 0;
    int sameStonesInRow = 1;

    for(int i = 0; i < 18; i++) {
        for(int j = 0; j < 18; j++) {
            boardInOneRow[counter] = board[j][i];
            counter++;
        }
        boardInOneRow[counter] = 0;
        counter++;
    }
    for(int i = 1; i < 324 + 18; i++) {
        if(boardInOneRow[i] == boardInOneRow[i-1] && boardInOneRow[i] != 0){
            sameStonesInRow++;
        } else {
            sameStonesInRow = 1;
        }
        if(sameStonesInRow == 5) {
            return true;
        }
    }
    return false;
}

bool WinWays::verticalTest(int board[18][18]){
    int boardInOneRow[324 + 18] = {9}; // na koncu kazdego wiersza dodaje 0, zeby oddzielic od siebie sasiednie wiersze
    int counter = 0;
    int sameStonesInCol = 1;

    for(int i = 0; i < 18; i++) {
        for(int j = 0; j < 18; j++) {
            boardInOneRow[counter] = board[i][j];
            counter++;
        }
        boardInOneRow[counter] = 0;
        counter++;
    }
    for(int i = 1; i < 324 + 18; i++) {
        if(boardInOneRow[i] == boardInOneRow[i-1] && boardInOneRow[i] != 0){
            sameStonesInCol++;
        } else {
            sameStonesInCol = 1;
        }
        if(sameStonesInCol == 5) {
            return true;
        }
    }
    return false;
}

bool WinWays::diagonalTest1(int board[18][18]){

    int boardInOneRow[324 + 18] = {9}; // na koncu kazdego wiersza dodaje 0, zeby oddzielic od siebie sasiednie wiersze
    int counter = 0;

    for(int i = 0; i < 18; i++) {
        for(int j = 0; j < 18; j++) {
            boardInOneRow[counter] = board[j][i];
            counter++;
        }
        boardInOneRow[counter] = 0;
        counter++;
    }
    for(int i = 0; i < 324 + 18 - 80; i++) {
        if(boardInOneRow[i] == boardInOneRow[i + 20] &&
            boardInOneRow[i] == boardInOneRow[i + 40] &&
            boardInOneRow[i] == boardInOneRow[i + 60] &&
            boardInOneRow[i] == boardInOneRow[i + 80] &&
            boardInOneRow[i] != 0){
            return true;
        }
    }
    return false;
}

bool WinWays::diagonalTest2(int board[18][18]){

    int boardInOneRow[324 + 18] = {9}; // na koncu kazdego wiersza dodaje 0, zeby oddzielic od siebie sasiednie wiersze
    int counter = 0;

    for(int i = 0; i < 18; i++) {
        for(int j = 0; j < 18; j++) {
            boardInOneRow[counter] = board[j][i];
            counter++;
        }
        boardInOneRow[counter] = 0;
        counter++;
    }
    for(int i = 0; i < 324 + 18 - 72; i++) {
        if(boardInOneRow[i] == boardInOneRow[i + 18] &&
           boardInOneRow[i] == boardInOneRow[i + 36] &&
           boardInOneRow[i] == boardInOneRow[i + 54] &&
           boardInOneRow[i] == boardInOneRow[i + 72] &&
           boardInOneRow[i] != 0){
            return true;
        }
    }
    return false;
}
