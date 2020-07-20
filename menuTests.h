#pragma once
using namespace std;

void controllerTests();

// MENU
void menuTests()
{
	system("cls");
	system("color 05");
	
	for(int i=0;i<83;i++)
	cout<<"*";
	
	const char* const start = "ПСИХОЛОГИЧЕСКИЕ ТЕСТЫ\0";
	pos(((83-strlen(start))/2), 2);
	cout<<start<<endl;
	
	pos(0, 4);
	for(int i=0;i<83;i++)
	cout<<"*";
		
	for(int i = 5; i < 17; i++)
	{
		pos(15, i);
		cout<<"|";
		pos(67, i);
		cout<<"|";
	}
	
	pos(15, 17);
	for(int i=15; i <= 67; i++)
	{	
		cout<<"_";
	}
	
	const char* const first = "Умеете ли вы контролировать себя\0";
	pos(((83-strlen(first))/2), 8);
	cout<<first;
	
	const char* const second = "Насколько вы доброжелательны\0";
	pos(((83-strlen(second))/2), 10);
	cout<<second;
	
	const char* const third = "А вы терпимый человек\0";
	pos(((83-strlen(third))/2), 12);
	cout<<third;
	
	const char* const fourth = "Назад в меню\0";
	pos(((83-strlen(fourth))/2), 14);
	cout<<fourth;
	
	controllerTests();
}
