#include<iostream>
using namespace std;

/*
	board[0][0] = 1			board[0][1] = 2 		board[0][2] = 3
	board[1][0] = 4			board[1][1] = 5 		board[1][2] = 6
	board[2][0] = 7			board[2][1] = 8 		board[2][2] = 9
*/
int check(char board[3][3])
{
	//col 1
	if(board[0][0]=='x' && board[1][0]=='x' && board[2][0]=='x')
	{
		return 1;
	}
	else if(board[0][0]=='o' && board[1][0]=='o' && board[2][0]=='o')
	{
		return 2;
	}
	
	//col 2
	if(board[0][1]=='x' && board[1][1]=='x' && board[2][1]=='x')
	{
		return 1;
	}
	else if(board[0][1]=='o' && board[1][1]=='o' && board[2][1]=='o')
	{
		return 2;
	}
	
	//col 3
	if(board[0][2]=='x' && board[1][2]=='x' && board[2][2]=='x')
	{
		return 1;
	}
	else if(board[0][2]=='o' && board[1][2]=='o' && board[2][2]=='o')
	{
		return 2;
	}
	
	//row 1
	if(board[0][0]=='x' && board[0][1]=='x' && board[0][2]=='x')
	{
		return 1;
	}
	else if(board[0][0]=='o' && board[0][1]=='o' && board[0][2]=='o')
	{
		return 2;
	}
	
	//row 2
	if(board[1][0]=='x' && board[1][1]=='x' && board[1][2]=='x')
	{
		return 1;
	}
	else if(board[1][0]=='o' && board[1][1]=='o' && board[1][2]=='o')
	{
		return 2;
	}
	
	//row 3
	if(board[2][0]=='x' && board[2][1]=='x' && board[2][2]=='x')
	{
		return 1;
	}
	else if(board[2][0]=='o' && board[2][1]=='o' && board[2][2]=='o')
	{
		return 2;
	}
	
	//diagonal 1
	if(board[0][0]=='x' && board[1][1]=='x' && board[2][2]=='x')
	{
		return 1;
	}
	else if(board[0][0]=='o' && board[1][1]=='o' && board[2][2]=='o')
	{
		return 2;
	}
	
	//diagonal 2
	if(board[0][2]=='x' && board[1][1]=='x' && board[2][0]=='x')
	{
		return 1;
	}
	else if(board[0][2]=='o' && board[1][1]=='o' && board[2][0]=='o')
	{
		return 2;
	}
	
	else
		return 3;
}

int drawcond(char board[3][3])
{
	int ctrxo=0;
	for(int j=0;j<=2;j++)
	{
		for(int k=0;k<=2;k++)
		{
			if(board[j][k]=='x')
			{
				ctrxo++;
			}
			if(board[j][k]=='o')
			{
				ctrxo++;
			}				
		}
	}
	return ctrxo;
}