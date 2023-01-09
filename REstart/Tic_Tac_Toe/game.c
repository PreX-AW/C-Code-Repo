#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
#define ROW 3
#define COL 3
char board[ROW][COL];

//********************************menu_print*********************
void menu() {
	printf("*****************************************\n");
	printf("***********        1.Play     ***********\n");
	printf("***********        0.Exit     ***********\n");
	printf("*****************************************\n");
	printf("*****************************************\n");
	printf("*****************************************\n");
}


//********************board_initialize*******************
void init_board() {
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			board[i][j] = ' ';
		} 
	}
}


//********************************************Player_put_chess************************8
void player_pin() {

	while (1) {
		int x = 0;
		int y = 0;
		printf("Please input the x-y you wanna pin chess:>\n");
		scanf("%d%d", &x, &y);//x>(1,3),y>(1,3)
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3) {
			if (' '!= board[x - 1][y - 1]) {
				printf("This position is pinned!\nPlease input again:>\n");
			}
			else if (' ' == board[x - 1][y - 1]) { board[x - 1][y - 1] = '*'; break; }
		}
		else printf("Error position input!");
		
	}
}


//***********************************************Computer_put_pin************************
void com_pin() {
	int x = 0;
	int y = 0;
	while (1) {
		x = rand() % 3;
		y = rand() % 3;
		if (' ' == board[x][y]) {
			board[x][y] ='#';
			break;
		}
	
	}



}
//***************************************print_borad*****************************
void display_board() {
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			printf(" %c ", board[i][j]);
			if (COL - 1 == j)printf("\n");
			else printf("|");
		}
		for (j = 0; j < COL; j++) {
			if (ROW - 1 == i)printf("");
			else  printf("--- ");
			
		}
		printf("\n");
	}

}


//********************************************judge_winner***************************
char is_winner() {
	int i = 0; int j = 0;

	
	

	for (i = 0; i < ROW; i++) {
		if ((board[i][0] == board[i][1] )&&( board[i][2]==board[i][0])&&(board[i][0]!=' ')) {
			return board[i][0];
					}
	
	}
	for (j = 0; j < COL; j++) {
		if ((board[0][j] == board[1][j]) && (board[0][j] == board[2][j])&&board[0][j]!=' ') {
			return board[0][j];
		}

	}
	if ((board[0][0] == board[1][1]) && (board[2][2] == board[0][0]) && board[0][0] != ' ')
		return board[1][1];
	if ((board[0][2] == board[1][1]) &&(board[0][2] == board[2][0])&&board[2][0]!=' ')
		return board[1][1];
	
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			if (' ' == board[i][j])return 'C';
		}
	}
	return'Q';
}



//*******************************game_realize******************
void game() {
	init_board();
	while (1) {
		player_pin();
		if ('*' == is_winner()) {
			printf("You beat the computer!\n");
			break;
		}
		if ('#' == is_winner()) {
			printf("Sorry,you failed!\n");
			break;
		}
		if ('Q' == is_winner()) {
			printf("You and computer are champion!\n");
			break;
		}
		system("cls");

	
		display_board();
	

		com_pin();
		if ('*' == is_winner()) {
			printf("You beat the computer!\n");
			break;
		}
		if ('#' == is_winner()) {
			printf("Sorry,you failed!\n");
			break;
		}
		if ('Q' == is_winner()) {
			printf("You and computer are champion!\n");
			break;
		}

		system("cls");
		display_board();
	}
	display_board();

}
