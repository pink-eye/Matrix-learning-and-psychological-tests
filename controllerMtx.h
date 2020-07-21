#pragma once

using namespace std;

void NumberAddiction();
void NumberSubtraction();
void MatrixAddiction();
void MatrixSubtraction();
void MatrixMultiplication();
void MatrixTranspose();

// CLEAR ARROWS
void clrMtx()
{
	for(int i=8;i<21;i += 2)
		{
			pos(57, i);
			cout<<" ";
			pos(25, i);
			cout<<" ";
		}
}

// FUNC TO CONTROL THE MENU
void controllerMtx()
{
	int x2 = 25, x1 = 57, y = 8, key, choice = 1;
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
			clrMtx();
		}
		if((key == 80) && (y < 20))
		{
			y+=2;
			choice++;
			clrMtx();
		}
		if((choice==1) && (key==13))
		{
			NumberAddiction();
		}
		if((choice==2) && (key==13))
		{
			NumberSubtraction();
		}
		if((choice==3) && (key==13))
		{
			MatrixAddiction();
		}
		if((choice==4) && (key==13))
		{
			MatrixSubtraction();
		}
		if((choice==5) && (key==13))
		{
			MatrixMultiplication();
		}
		if((choice==6) && (key==13))
		{
			MatrixTranspose();
		}
		if((choice==7) && (key==13))
		{
			system("cls");
			mainMenu();
			mainController();
			clrMtx();
		}
		clrMtx();
		pos(x1, y);
		cout<<"*";
		pos(x2, y);
		cout<<"*";
	}
}


