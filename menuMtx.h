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
		
	for(int i = 5; i < 20; i++)
	{
		pos(18, i);
		cout<<"|";
		pos(64, i);
		cout<<"|";
	}
	
	pos(18, 20);
	for(int i=18; i <= 64; i++)
	{	
		cout<<"_";
	}
	
	const char* const first = "�������� ������� �� �����\0";
	pos(((83-strlen(first))/2), 8);
	cout<<first;
	
	const char* const second = "�������� ���� ������\0";
	pos(((83-strlen(second))/2), 10);
	cout<<second;
	
	const char* const third = "������������ ���� ������\0";
	pos(((83-strlen(third))/2), 12);
	cout<<third;
	
	const char* const fourth = "���������������� �������\0";
	pos(((83-strlen(fourth))/2), 14);
	cout<<fourth;
	
	const char* const fifth = "����� � ����\0";
	pos(((83-strlen(fifth))/2), 16);
	cout<<fifth;
	
	controllerMtx();
}
