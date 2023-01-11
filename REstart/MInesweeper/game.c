#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
#define ROW 4
#define COL 4
char board_show[ROW][COL];
char board_mine[ROW + 2][COL + 2];
//*****************************************print_menu*****************************************
void menu() {
	printf("Please input select number:>\n");
	printf("\n");
	printf("******************       1.Play       ********************\n");
	printf("\n");

	printf("******************       0.Exit       ********************\n");
	
}
//****************************************board_show_init*************************************
void init_board_show() {
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			board_show[i][j] = '*';
		}
	}
}

//**************************************board_mine_init*************************************
void init_board_mine() {
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW + 2; i++) {
		for (j = 0; j < COL + 2; j++) {
			board_mine[i][j] = '0';
		}
	}
	 i = ROW;
	while (i--) {
		int x = rand() % ROW + 1;
		int y = rand() % COL + 1;
		if ('#' != board_mine[x][y])board_mine[x][y] = '#';


	}



}
//***************************************print_show_board***********************************
void dis_board() {
	int i = 0;
	int j = 0;
	printf("\n");
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			printf(" %c ", board_show[i][j]);
			if (COL - 1 == j) {
				break;
			}
			printf("|");
		}
		printf("\n");
		for (j = 0; j < COL; j++) {
			
			if (ROW - 1 == i) {
				printf("\n");
				break;
			}
			printf("--- ");
			
			if (COL - 1 == j)printf("\n");
			
		}

		
		
	}
}


//********************************************player_pin********************************************
int  player_pin() {
	int x = 0;
	int y = 0;
	printf("Please input x-y you wanna pin:>\n");
	scanf("%d%d", &x, &y);
	if ((x >= 1 && x <= 10) && (y >= 1 && y<= 10)) {
		if ('#' != board_mine[x][y]) {
			int row = 0;
			int col = 0;
			int count = 0;
			for (row = x - 1; row < x + 2; row++) {
				for (col = y - 1; col < y + 2; col++) {
					if ('#' == board_mine[row][col]) {
						count++;
					}
				}
			}
			board_show[x - 1][y - 1] = count+'0';
			return 0;
		}
		int i = 1; int j = 1; int sum = 0;
		for (i = 1; i < 11; i++) {
			for (j = 1; j < 11; j++) {
				if ('*' == board_mine[i][j])sum++;
			}
		}
		if (0 == sum)return -2;
	}
	else {
		printf("Error x-y input,please input again:>\n");
		return 0;
	}
	board_show[x-1][y-1] = '#';
	return -1;



}

//****************************************game_realize************************
void game() {
	srand((unsigned int)time(NULL));
	init_board_show();
	init_board_mine();
	while (1) {
		
		int ret = player_pin();
		if (-1 == ret) {
			printf("You failed!\n");
			break;
		}
		
			if (-2 == ret){
				printf("you win!\n");
				break;
			}
			system("cls");
			dis_board();
			
	}
	
	dis_board();
}