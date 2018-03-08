//othello assignment code
#include <stdio.h>
#include<math.h>
#include<string.h>

 char board[8][8]={"x"};
 //player structure
struct player
{
	char name[20];
	char colour[10];
	int tokens;
};
//main is used for players to assign their names and receive a random colour
int main (void)
{
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
}

int start( )
{
	
}

int print( char board[8][8])
{
	
	
}