#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		printf("Please input select number:>\n");
		menu();
		scanf("%d", &input);
		switch(input) {
			case 1:
				game();
				break;
			case 0:
				printf("Exit game.\n");
				break;
			default:
				printf("Error number input,please input again.\n");
		}
	} while (input);
	



	return 0;
}
