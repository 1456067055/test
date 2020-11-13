#include"game.h"

int main()
{
	int quite = 0;
	while (!quite){
		Menu();
		int select = 0;
		scanf("%d", &select);
		switch (select){
		case 1:
			//Game();
			break;
		case 2:
			quite = 1;
			break;
		default:
			printf("Enter Error!");
			break;
		}
	}
	printf("bye");
	system("pause");

}