#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 11
#define COL 11
#define MineNum 10

void InitBoard(char board[ROW][COL], int row, int col, char a);
void DisplayBoard(char board[ROW][COL], int row, int col);
void Setmine(char board[ROW][COL], int row, int col);
int Check(char mine[ROW][COL], char show[ROW][COL]);