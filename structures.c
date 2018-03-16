#include <stdio.h>
#include<math.h>
#include<string.h>

#include "structures.h"

 //player structure
struct player
{
	char name;
	char colour;
	int tokens;
	int tokensLeft;
};
//structures for the disk
struct disks
{
	char colour[10];
	int position[2];
}disk[64];

struct board{

	char grid[8][8];
}board;




void start(int x, struct board.grid[x][x])
{
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 9; j++)
		{
			if((i == 3 && j == 3) || (i == 4 && j == 4))
			{
				board.grid[i][j] = '1';
			}
			else if((i == 3 && j == 4) || (i == 4 && j == 3))
			{
				board.grid[i][j] = '0';
			}
			else
			{
				board.grid[i][j] = 'x';
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
			printf("%3c", board.grid[i][j]);
		}
		printf("\n");
	}

}
