#pragma once

void menuMtx();
void menuTests();
void controllerMtx();
void controllerTests();
void about();

// CLEAR ARROWS
void mainClr()
{
	for(int i=8;i<15;i += 2)
		{
			pos(55, i);
			cout<<" ";
			pos(27, i);
			cout<<" ";
		}
}

// FUNC TO CONTROL THE MENU
void mainController()
{
	HANDLE hndl=GetStdHandle(STD_OUTPUT_HANDLE);
	int x2 = 27, x1 = 55, y = 8, key, choice = 1;
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
			mainClr();
		}
		if((key == 80) && (y < 14))
		{
			y+=2;
			choice++;
			mainClr();
		}
		if((choice==1) && (key==13))
		{
			mainClr();
			menuMtx();
			controllerMtx();
		}
		if((choice==2) && (key==13))
		{
			mainClr();
			menuTests();
			controllerTests();
		}
		if((choice==3) && (key==13))
		{
			about();
		}
		if((choice==4) && (key==13))
		{
			GenerateConsoleCtrlEvent(CTRL_BREAK_EVENT, 0);
		}
		mainClr();
		pos(x1, y);
		cout<<"*";
		pos(x2, y);
		cout<<"*";
	}
}
