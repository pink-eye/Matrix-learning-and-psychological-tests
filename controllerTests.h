#pragma once
using namespace std;

void firstTest();
void secondTest();
void thirdTest();

// CLEAR ARROWS
void clrTests()
{
	for(int i = 8; i < 15; i += 2)
		{
			pos(62, i);
			cout<<" ";
			pos(20, i);
			cout<<" ";
		}
}

// FUNC TO CONTROL THE MENU
void controllerTests()
{
	int x2=20, x1=62, y=8, key, choice=1;
	pos(x1, y);
	cout<<"*";
	pos(x2, y);
	cout<<"*";
	while(true)
	{
		key=_getch();
		if((key == 72) && (y > 8))
		{
			y-=2;
			choice--;
			clrTests();
		}
		if((key == 80) && (y < 14))
		{
			y+=2;
			choice++;
			clrTests();
		}
		if((choice==1) && (key==13))
		{
			firstTest();
		}
		if((choice==2) && (key==13))
		{
			secondTest();
		}
		if((choice==3) && (key==13))
		{
			thirdTest();
		}
		if((choice==4) && (key==13))
		{
			system("cls");
			mainMenu();
			mainController();
			clrTests();
		}
		clrTests();
		pos(x1, y);
		cout<<"*";
		pos(x2, y);
		cout<<"*";
	}
}


