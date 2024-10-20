#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

#define ROW 10
#define COL 10
#define VIC 5

void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
int JudgeP(char board[ROW][COL], int row, int col);
int JudgeC(char board[ROW][COL], int row, int col);
