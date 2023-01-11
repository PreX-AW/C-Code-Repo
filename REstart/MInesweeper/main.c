#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
int main() {
	int input = 0;
	do {
		menu();
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
				break;
		case 0:
			printf("Exit game.");
			break;
		default:
			printf("Error number input,please try again.");
		}
	} while (input);
	return 0;
}