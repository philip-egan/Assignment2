//othello assignment code
#include <stdio.h>
#include<math.h>
#include<string.h>

#include "libraries.h"




void start(int y, struct board.grid[x][x])
void printBoard();
//main is used for players to assign their names and receive a random colour
int main (void)
{
	// starts the program
	start();

	int totalTokens=0;
	//initializes the variables for player 1 and 2
	struct player player1;
	struct player player2;
	//players enter their names
	printf("please enter player Ones Name\n");
	fgets(player1.name,20,stdin);
	printf("please enter player Twos Name\n");
	fgets(player2.name,20,stdin);

	//assigns tokens
	player1.tokens=2;
	player2.tokens=2;
	player1.tokensLeft=30;
	player2.tokensLeft=30;

	//temp is used for the if/ else
	//this will assign player 1 & 2 a random colour to start the game
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
	//prints the colour the player has been assigned
	printf("player 1 :%s\n",player1.colour);
	printf("player 2 : %s\n",player2.colour);

	//while loop to keep track of turns and tokens left
	while (totalplayed !=64)
	{
		//turns will go here
		player1.tokens++;
		player2.tokens++;
		player1.tokensLeft--;
		player2.tokensLeft--;
		totalTokens+=2;

	}
	//prints the board
	printBoard();
}

