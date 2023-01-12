#define _CRT_SECURE_NO_WARNINGS
//#include"game.h"
//#define ROW 4
//#define COL 4
//char board_show[ROW][COL];
//char board_mine[ROW + 4][COL + 4];
////*****************************************print_menu*****************************************
//void menu() {
//	printf("Please input select number:>\n");
//	printf("\n");
//	printf("******************       1.Play       ********************\n");
//	printf("\n");
//
//	printf("******************       0.Exit       ********************\n");
//	
//}
////****************************************board_show_init*************************************
//void init_board_show() {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < ROW; i++) {
//		for (j = 0; j < COL; j++) {
//			board_show[i][j] = '*';
//		}
//	}
//}
//
////**************************************board_mine_init*************************************
//void init_board_mine() {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < ROW + 2; i++) {
//		for (j = 0; j < COL + 2; j++) {
//			board_mine[i][j] = '0';
//		}
//	}
//	i =0;
//	while (1) {
//		int x = rand() % ROW + 2;
//		int y = rand() % COL + 2;
//		if ('#' != board_mine[x][y]) {
//			board_mine[x][y] = '#'; i++;
//				if (4 == i)break;
//		}
//
//
//	}
//
//
//
//}
////***************************************print_show_board***********************************
//void dis_board() {
//	int i = 0;
//	int j = 0;
//	printf("\n");
//	for (i = 0; i < ROW; i++) {
//		for (j = 0; j < COL; j++) {
//			printf(" %c ", board_show[i][j]);
//			if (COL - 1 == j) {
//				break;
//			}
//			printf("|");
//		}
//		printf("\n");
//		for (j = 0; j < COL; j++) {
//			
//			if (ROW - 1 == i) {
//				printf("\n");
//				break;
//			}
//			printf("--- ");
//			
//			if (COL - 1 == j)printf("\n");
//			
//		}
//
//		
//		
//	}
//}
////***************************************pirnt_mine_board**********************************
//void dis_mine() {
//	int i = 0;
//	int j = 0;
//	printf("\n");
//	for (i = 2; i < ROW+2; i++) {
//		for (j = 2; j < COL+2; j++) {
//			printf(" %c ", board_mine[i][j]);
//			if (COL+1 == j) {
//				break;
//			}
//			printf("|");
//		}
//		printf("\n");
//		for (j = 2; j < COL+2; j++) {
//
//			if (ROW+1  == i) {
//				printf("\n");
//				break;
//			}
//			printf("--- ");
//
//			if (COL+1  == j)printf("\n");
//
//		}
//
//
//
//	}
//}
//
//
////********************************************player_pin********************************************
//int  player_pin() {
//	int x = 0;
//	int y = 0;
//	printf("Please input x-y you wanna pin:>\n");
//	scanf("%d%d", &x, &y);
//	if ((x >= 1 && x <= 10) && (y >= 1 && y<= 10)) {
//		if ('#' != board_mine[x][y]) {
//			int row = 0;
//			int col = 0;
//			int count = 0;
//			for (row = x - 1; row < x + 2; row++) {
//				for (col = y - 1; col < y + 2; col++) {
//					if ('#' == board_mine[row][col]) {
//						count++;
//					}
//				}
//			}
//			board_show[x - 1][y - 1] = count+'0';
//			return 0;
//		}
//		int i = 1; int j = 1; int sum = 0;
//		for (i = 1; i < 11; i++) {
//			for (j = 1; j < 11; j++) {
//				if ('*' == board_mine[i][j])sum++;
//			}
//		}
//		if (0 == sum)return -2;
//	}
//	else {
//		printf("Error x-y input,please input again:>\n");
//		return 0;
//	}
//	board_show[x-1][y-1] = '#';
//	return -1;
//
//
//
//}
//
////****************************************game_realize************************
//void game() {
//	srand((unsigned int)time(NULL));
//	init_board_show();
//	init_board_mine();
//	while (1) {
//		
//		int ret = player_pin();
//		if (-1 == ret) {
//			printf("You failed!\n");
//			break;
//		}
//		
//			if (-2 == ret){
//				printf("you win!\n");
//				break;
//			}
//			system("cls");
//			dis_board();
//			
//	}
//	dis_mine();
//	dis_board();
//}
#define ROW 10
#define COL 10
char show[ROW][COL] = { 0 };
char mine[ROW + 2][COL + 2] = { 0 };
#include"game.h"
#define SUM 10
void menu() {
	printf("                                               \n");
	printf("                   1.Play                      \n");
	printf("                                               \n");
	printf("                   0.Exit                      \n");
}
//*************************************************init_show and init_mine************************************
void init_board(char*show[10][10],char*mine[12][12]) {
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			show[i][j] = '*';

		}
	}
	for (i = 0; i < ROW+2; i++) {
		for (j = 0; j < COL+2; j++) {
			mine[i][j] = '0';

		}
	}
	
}

//****************************************computer_pin***********************************
void computer(char* mine[ROW+2][COL+2]) {
	int sum = 0;
	while (1) {
		int x = rand() % ROW + 1;
		int y = rand() % COL + 1;
		if ('0' == mine[x][y]) {
			mine[x][y] = '1';
			sum++;
			if (SUM == sum)break;
		}
	}

}
//***********************************print_show******************************
void print(char* show[ROW][COL]) {
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			printf(" %c ", show[i][j]);
		}
		printf("\n");
	}

}
//*******************************************play_pin******************************
int  play() {
	int x = 0;
	int y = 0;
	int ac = 0;
	while ((ROW*COL)-SUM!=ac) {
		printf("Please input x-y number:>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= 10 && y >= 1 && y <= 10) {
			if ('1' == mine[x][y]) {
				printf("You fail!\n");
					break;
			}
			if ('*' == show[x][y]) {
				int ret = 0;
				ret = mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] +
					mine[x][y - 1] + mine[x][y] + mine[x][y + 1]
					+ mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';
				show[x][y] = ret;
				ac++;
				print(show);

			}
			else printf("This position has been pinned!\n");
		}
	}
	printf("You win!\n");

}

//*******************************************game_realize********************************

void game() {

	init_board(show, mine);
	computer(mine);

	play();
}