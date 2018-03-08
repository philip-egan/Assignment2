//othello assignment code
#include <stdio.h>
#include<math.h>
#include<string.h>

 char board[8][8]={"x"};
 
struct player
{
	char name[20];
	char colour[10];
	int tokens;
};

int main (void)
{
	struct player player1;
	struct player player2;
	printf("please enter player Ones Name\n");
	fgets(player1.name,20,stdin);
	printf("%s\n",player1.name);
	printf("please enter player Twos Name\n");
	fgets(player2.name,20,stdin);
	
	
	
	int temp = rand()%2;
	if(temp==0)
	{
		player1.colour=="1";
		player2.colour=="0";
	}
	else{
		player1.colour=="0";
		player2.colour=="1";
	}
	printf("%s\n",player1.colour);
	printf("%s is : %s\n",player2.name,player2.colour);
}

int start( )
{
	
}

int print( char board[8][8])
{
	
	
}