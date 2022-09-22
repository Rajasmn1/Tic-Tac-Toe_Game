#include<iostream>
using namespace std;

/*
	board[0][0] = 1			board[0][1] = 2 		board[0][2] = 3
	board[1][0] = 4			board[1][1] = 5 		board[1][2] = 6
	board[2][0] = 7			board[2][1] = 8 		board[2][2] = 9
*/

int validinp(char num,char board[3][3])
{
	int flag=-1;
	if(num>='1' && num<='9')
	{
		flag=1;
	}
//	num = 1
	if(num=='1')
	{
		if(board[0][0]=='x'||board[0][0]=='o')
		{
			return -1;
		}
	}
//	num = 2
	if(num=='2')
	{
		if(board[0][1]=='x'||board[0][1]=='o')
		{
			return -1;
		}
	}
//	num = 3
	if(num=='3')
	{
		if(board[0][2]=='x'||board[0][2]=='o')
		{
			return -1;
		}
	}
//	num = 4
	if(num=='4')
	{
		if(board[1][0]=='x'||board[1][0]=='o')
		{
			return -1;
		}
	}
//	num = 5
	if(num=='5')
	{
		if(board[1][1]=='x'||board[1][1]=='o')
		{
			return -1;
		}
	}
//	num = 6
	if(num=='6')
	{
		if(board[1][2]=='x'||board[1][2]=='o')
		{
			return -1;
		}
	}
//	num = 7
	if(num=='7')
	{
		if(board[2][0]=='x'||board[2][0]=='o')
		{
			return -1;
		}
	}
//	num = 8
	if(num=='8')
	{
		if(board[2][1]=='x'||board[2][1]=='o')
		{
			return -1;
		}
	}
// num = 9
	if(num=='9')
	{
		if(board[2][2]=='x'||board[2][2]=='o')
		{
			return -1;
		}
	}
	return flag;
}