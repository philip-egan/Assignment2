//othello assignment code
#include <stdio.h>
#include<math.h>
#include<string.h>

 char board[8][8];
 //player structure
struct player
{
	char name[20];
	char colour[10];
	int tokens;
};

void start();
void printBoard();
//main is used for players to assign their names and receive a random colour
int main (void)
{
	start();
	
	struct player player1;
	struct player player2;
	printf("please enter player Ones Name\n");
	fgets(player1.name,20,stdin);

	printf("please enter player Twos Name\n");
	fgets(player2.name,20,stdin);
	
	player1.tokens=32;
	player2.tokens=32;
	
	//temp is used for the if/ else
	//this will assign player 1 +2 a random colour to start the game
	int temp = rand()%2;
	if(temp==0)
	{
		strcpy(player1.colour, "1");
		strcpy(player2.colour, "0");
	}
	else{
		strcpy(player1.colour, "0");
		strcpy(player2.colour, "1");
	}
	printf("player 1 :%s\n",player1.colour);
	printf("player 2 : %s\n",player2.colour);
	
	printBoard();
}

void start()
{
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 9; j++)
		{
			if((i == 3 && j == 3) || (i == 4 && j == 4))
			{
				board[i][j] = '1';
			}
			else if((i == 3 && j == 4) || (i == 4 && j == 3))
			{
				board[i][j] = '0';
			}
			else
			{
				board[i][j] = 'x';
			}
		}
	}
}

void printBoard()
{
	int i, j;
	
	printf("%3c",' ');
	for(i = 1; i <= 8; i++ )
	{
		printf("%3d", i);
	}
	printf("\n");
	for(i = 0; i < 8; i++)
	{
		printf("%3d", (i+1));
		for(j = 0; j < 8; j++)
		{
			printf("%3c", board[i][j]);
		}
		printf("\n");
	}
	
}
