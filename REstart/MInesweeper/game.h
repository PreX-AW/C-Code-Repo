//#pragma once
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//void menu();
//void game();
//void dis_borad();
//void init_board_show();
//void init_board_mine();
//int player_pin();
//void dis_mine();
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game();
void menu();
void init_board(char*show[10][10],char*mine[12][12]);
void computer(char* mine[12][12]);
void print(char* [10][10]);
int play();