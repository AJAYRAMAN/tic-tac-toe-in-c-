#include<iostream>
using namespace std;
const int row=3;
const int col=3;
char a[row][col]={' '};
char now='x';
void rungame();
int boardisfull();
void getuserip();
int winner();
int slotisempty(int r, int c);
void printcurrent();

int main()
{
	rungame();
}
 
void rungame()
{
	printcurrent();
	while( 1)
	{
		
		if( boardisfull())
		break;
		if(winner())
		break;
		getuserip();
		printcurrent();
	}
}

int boardisfull()
{
	int i,j,flag=1;
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	{
		if( a[i][j]=='\0' )
	//	cout<<flag<<" ";}
	{
		return 0;
	}
	}
	cout<<"board is full , game ends in a draw ,restart the game"<<endl;
	return 1;
}

void getuserip()
{
	int r,c;
	cout<<" it is "<<now <<" turn ,please enter the position\n";
	cin>>r>>c;
	while(!slotisempty(r,c) || r>=row || c>=col)
	{
	cout<<" please enter a valid input\n";
	cin>>r>>c;
}
if(slotisempty(r,c))
a[r][c]=now;
if(winner())
exit(0);
if(now=='x')
now='o';
else
now='x';
}

int winner()
{
	if( a[0][0]==a[0][1] && a[0][1]== a[0][2] && a[0][1]== 'x')
	{ 
	    printcurrent();
		cout<<"the winner is "<<a[0][0]<<endl;
		return 1;
	}
	if( a[0][0]==a[0][1] && a[0][1]== a[0][2] && a[0][1]== 'o')
	{ 
	    printcurrent();
		cout<<"the winner is "<<a[0][0]<<endl;
		return 1;
	}
		if( a[1][0]==a[1][1] && a[1][1]==a[1][2] && a[1][2]=='x' )
	{
		printcurrent();
		cout<<"the winner is "<<a[1][1]<<endl;
		return 1;
	}
	 	if( a[1][0]==a[1][1] && a[1][1]==a[1][2] && a[1][2]=='o' )
	{
		printcurrent();
		cout<<"the winner is "<<a[1][1]<<endl;
		return 1;
	}
		if( a[2][0]==a[2][1] && a[2][1]==a[2][2] && a[2][0]=='x' )
	{
		printcurrent();
		cout<<"the winner is "<<now<<endl;
		return 1;
	}
		if( a[2][0]==a[2][1] && a[2][1]==a[2][2] && a[2][0]=='o' )
	{
		printcurrent();
		cout<<"the winner is "<<now<<endl;
		return 1;
	}
		if( a[0][0]==a[1][0] && a[1][0]==a[2][0] && a[0][0]=='x')
	{
		printcurrent();
		cout<<"the winner is "<<now<<endl;
		return 1;
	}
		if( a[0][0]==a[1][0] && a[1][0]==a[2][0] && a[0][0]=='o')
	{
		printcurrent();
		cout<<"the winner is "<<now<<endl;
		return 1;
	}
		if( a[0][1]==a[1][1] && a[1][1]==a[2][1] && a[0][1]=='x' )
	{
		printcurrent();
		cout<<"the winner is "<<now<<endl;
		return 1;
	}
		if( a[0][1]==a[1][1] && a[1][1]==a[2][1] && a[0][1]=='o' )
	{
		printcurrent();
		cout<<"the winner is "<<now<<endl;
		return 1;
	}
		if( a[0][2]==a[1][2] && a[1][2]==a[2][2] && a[0][2]=='x')
	{
		printcurrent();
		cout<<"the winner is "<<now<<endl;
		return 1;
	}
		if( a[0][2]==a[1][2] && a[1][2]==a[2][2] && a[0][2]=='o')
	{
		printcurrent();
		cout<<"the winner is "<<now<<endl;
		return 1;
	}
		if( a[0][0]==a[1][1] && a[1][1]==a[2][2] && a[0][0]=='x')
	{
		printcurrent();
		cout<<"the winner is "<<now<<endl;
		return 1;
	}
		if( a[0][0]==a[1][1] && a[1][1]==a[2][2] && a[0][0]=='o')
	{
		printcurrent();
		cout<<"the winner is "<<now<<endl;
		return 1;
	}
		if( a[0][2]==a[1][1] && a[1][1]==a[2][0] && a[0][2]=='x' )
	{ 
	    printcurrent();
		cout<<"the winner is "<<now<<endl;
		return 1;
	}
		if( a[0][2]==a[1][1] && a[1][1]==a[2][0] && a[0][2]=='o' )
	{ 
	    printcurrent();
		cout<<"the winner is "<<now<<endl;
		return 1;
	}
	return 0;
	
}

int slotisempty(int r,int c)
{
	if(a[r][c]=='x' || a[r][c]=='o')
	return 0;
	return 1;
}

void printcurrent()
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		/*	if(a[i][j]!='x' || a[i][j]!='o')
			cout<<" |";
			else*/
			cout<<a[i][j]<<"|";
		}
		cout<<"\n------"<<endl;
	}
}
