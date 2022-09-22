#include<iostream>
#include"input1.cpp"
#include"input2.cpp"
#include"winner.cpp"
#include"validity.cpp"
using namespace std;

void drawboard(char board[3][3])
{
	cout<<" "<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<endl;
	cout<<"------------"<<endl;
	cout<<" "<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<endl;
	cout<<"------------"<<endl;
	cout<<" "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<endl;
}

int main()
{
	int ctrxo;
	char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	
	char num;
	
	do
	{
		do
		{
			drawboard(board);
			cout<<"Enter slot for player 1 = ";
			cin>>num;
			if(validinp(num,board)==-1)
			{
				cout<<endl<<"Invalid input"<<endl;
			}
		}while(validinp(num,board)==-1);
		
		cout<<endl;
		input1(num,board);
		
		if(check(board)==1)
		{
			drawboard(board);
			cout<<endl<<"player 1 has won."<<endl;
			break;
		}
		if(drawcond(board)==9)
		{
			drawboard(board);
			cout<<endl<<"It's a draw"<<endl;
			break;
		}

		do
		{
			drawboard(board);
			cout<<"Enter slot for player 2 = ";
			cin>>num;
			if(validinp(num,board)==-1)
			{
				cout<<endl<<"Invalid input"<<endl;
			}
		}while(validinp(num,board)==-1);
				
		cout<<endl;
		input2(num,board);

		if(check(board)==2)
		{
			drawboard(board);
			cout<<endl<<"player 2 has won."<<endl;
			break;
		}
		if(drawcond(board)==9)
		{
			drawboard(board);
			cout<<endl<<"It's a draw"<<endl;
			break;
		}
	}while(check(board)!=1||check(board)!=2);

	cout<<"Congratulations"<<endl;
	return 0;
}
