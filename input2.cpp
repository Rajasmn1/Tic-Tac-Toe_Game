/*
	board[0][0] = 1			board[0][1] = 2 		board[0][2] = 3
	board[1][0] = 4			board[1][1] = 5 		board[1][2] = 6
	board[2][0] = 7			board[2][1] = 8 		board[2][2] = 9
*/

char input2(char num,char board[3][3])
{
//	num = 1
	if(num=='1')
	{
		board[0][0]='o';
	}
//	num = 2
	if(num=='2')
	{
		board[0][1]='o';
	}
//	num = 3
	if(num=='3')
	{
		board[0][2]='o';
	}
//	num = 4
	if(num=='4')
	{
		board[1][0]='o';
	}
//	num = 5
	if(num=='5')
	{
		board[1][1]='o';
	}
//	num = 6
	if(num=='6')
	{
		board[1][2]='o';
	}
//	num = 7
	if(num=='7')
	{
		board[2][0]='o';
	}
//	num = 8
	if(num=='8')
	{
		board[2][1]='o';
	}
//	num = 9
	if(num=='9')
	{
		board[2][2]='o';
	}
	return (board[3][3]);		
}
