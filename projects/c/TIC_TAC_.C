#include<stdio.h>
#include<conio.h>
int i,x;
  char a[10]={'0','1','2','3','4','5','6','7','8','9'};

	 void board()
	{
	//to print the table
	 printf("\n\t _ _ _ _ _ _");
	 printf("\n\t|_%c_|_%c_|_%c_|",a[1],a[2],a[3]);
	 printf("\n\t|_%c_|_%c_|_%c_|",a[4],a[5],a[6]);
	 printf("\n\t|_%c_|_%c_|_%c_|",a[7],a[8],a[9]);
	}

       int winner()
	{
		if(a[1]==a[2] && a[2]==a[3])
		{
				return 1;
		}
		   else if(a[4]==a[5] && a[5]==a[6])
		       {
				return 1;
		       }
			     else if(a[7]==a[8] && a[8]==a[9])
				{
				return 1;
				}
				else if(a[1]==a[4] && a[4]==a[7])
				{
				return 1;
				}
				else if(a[2]==a[5] && a[5]==a[8])
				{
				return 1;
				}
				else if(a[3]==a[6] && a[6]==a[9])
				{
				return 1;
				}
				else if(a[1]==a[5] && a[5]==a[9])
				{
				return 1;
				}
				else if(a[7]==a[5] && a[5]==a[3])
				{
				return 1;
				}

			else if(a[1]!='1' && a[2]!='2' && a[3]!='3' && a[4]!='4' && a[5]!='5' && a[6]!='6' && a[7]!='7' && a[8]!='8' && a[9]!='9')
			{
			//when all positions are filled and no one win the game.
				return 0;
			}
		else
		{
		//if player entered a wrong value.
			return -1;
		}
	}

void main()
{
	int player=1,s;
	char mark;
	clrscr();
	board();
	do{
	printf("\n\nEnter the position : ");
	scanf("%d",&i);
	player=(player%2)?1:2;
	printf("player %d",player);
	mark=(player==1)?'X':'0';
	if(a[1]=='1' && i==1)
	{
	a[1]=mark;
	}
       else if(a[2]=='2' && i==2)
	{
	a[2]=mark;
	}

	else if(a[3]=='3' && i==3)
	{
	a[3]=mark;
	}
	else if(a[4]=='4' && i==4)
	{
	a[4]=mark;
	}
	else if(a[5]=='5' && i==5)
	{
	a[5]=mark;
	}
	else if(a[6]=='6' && i==6)
	{
	a[6]=mark;
	}
	else if(a[7]=='7' && i==7)
	{
	a[7]=mark;
	}
	else if(a[8]=='8' && i==8)
	{
	a[8]=mark;
	}
	else if(a[9]=='9' && i==9)
	{
	a[9]=mark;
	}
	else{
	printf("\ninvalid");
	player--;
	getch();
	}
	board();
	s=winner();
	player++;
	}
	while(s==-1);
	if(s==1)
	{
	printf("\nPlayer %d is winner ",player-1);
	}
	else
	printf("\nGame is drown ");
getch();
}