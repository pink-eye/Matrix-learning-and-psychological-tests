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
	
	const char* const start = "�������� ��������� ��� ��������� � �� ���������������\0";
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
	
	const char* const firstMenuItem = "�������� ������� �� �����\0";
	pos(((83-strlen(firstMenuItem))/2), 8);
	cout<<firstMenuItem;
	
	const char* const secondMenuItem = "�������� ������� � �����\0";
	pos(((83-strlen(secondMenuItem))/2), 10);
	cout<<secondMenuItem;
	
	const char* const thirdMenuItem = "�������� ���� ������\0";
	pos(((83-strlen(thirdMenuItem))/2), 12);
	cout<<thirdMenuItem;
	
	const char* const fourthMenuItem = "�������� ���� ������\0";
	pos(((83-strlen(fourthMenuItem))/2), 14);
	cout<<fourthMenuItem;
	
	const char* const fifthMenuItem = "������������ ���� ������\0";
	pos(((83-strlen(fifthMenuItem))/2), 16);
	cout<<fifthMenuItem;
	
	const char* const sixthMenuItem = "���������������� �������\0";
	pos(((83-strlen(sixthMenuItem))/2), 18);
	cout<<sixthMenuItem;
	
	const char* const seventhMenuItem = "����� � ����\0";
	pos(((83-strlen(seventhMenuItem))/2), 20);
	cout<<seventhMenuItem;
	
	controllerMtx();
}
