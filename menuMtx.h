#pragma once
using namespace std;

void controllerMtx();

// MENU
void menuMtx()
{
	system("cls");
	system("color 04");
	
	for(int i=0;i<83;i++)
	cout<<"*";
	
	const char* const start = "ОБУЧЕНИЕ ОПЕРАЦИЯМ НАД МАТРИЦАМИ И ИХ ПРЕОБРАЗОВАНИЯМ\0";
	pos(((83-strlen(start))/2), 2);
	cout<<start<<endl;
	
	pos(0, 4);
	for(int i=0;i<83;i++)
	cout<<"*";
	
	pos(0, 4);
	for(int i=0;i<83;i++)
		cout<<"*";
		
	for(int i = 5; i < 23; i++)
	{
		pos(18, i);
		cout<<"|";
		pos(64, i);
		cout<<"|";
	}
	
	pos(18, 23);
	for(int i=18; i <= 64; i++)
	{	
		cout<<"_";
	}
	
	const char* const firstMenuItem = "Сложение матрицы на число\0";
	pos(((83-strlen(firstMenuItem))/2), 8);
	cout<<firstMenuItem;
	
	const char* const secondMenuItem = "Разность матрицы и числа\0";
	pos(((83-strlen(secondMenuItem))/2), 10);
	cout<<secondMenuItem;
	
	const char* const thirdMenuItem = "Сложение двух матриц\0";
	pos(((83-strlen(thirdMenuItem))/2), 12);
	cout<<thirdMenuItem;
	
	const char* const fourthMenuItem = "Разность двух матриц\0";
	pos(((83-strlen(fourthMenuItem))/2), 14);
	cout<<fourthMenuItem;
	
	const char* const fifthMenuItem = "Произведение двух матриц\0";
	pos(((83-strlen(fifthMenuItem))/2), 16);
	cout<<fifthMenuItem;
	
	const char* const sixthMenuItem = "Транспонирование матрицы\0";
	pos(((83-strlen(sixthMenuItem))/2), 18);
	cout<<sixthMenuItem;
	
	const char* const seventhMenuItem = "Назад в меню\0";
	pos(((83-strlen(seventhMenuItem))/2), 20);
	cout<<seventhMenuItem;
	
	controllerMtx();
}
