#pragma once

using namespace std;

// MENU
void mainMenu()
{
	system("color 02");
	
	// HEADER
	
	for(int i=0;i<83;i++)  
		cout<<"*";
		
	const char* const start = "�������� ������\0";
	pos(((83-strlen(start))/2), 2);
	cout<<start<<endl;
	
	pos(0, 4);
	for(int i=0;i<83;i++)
		cout<<"*";
	
	// BODY	
	for(int i = 5; i < 17; i++)
	{
		pos(20, i);
		cout<<"|";
		pos(62, i);
		cout<<"|";
	}
	
	pos(20, 17);
	for(int i=20; i <= 62; i++)
	{	
		cout<<"_";
	}
	
	const char* const firstMenuItem = "�������";
	pos(((83-strlen(firstMenuItem))/2), 8);
	cout<<firstMenuItem;
	
	const char* const secondMenuItem = "��������������� �����";
	pos(((83-strlen(secondMenuItem))/2), 10);
	cout<<secondMenuItem;
	
	const char* const thirdMenuItem = "�� ������";
	pos(((83-strlen(thirdMenuItem))/2), 12);
	cout<<thirdMenuItem;
	
	const char* const fourthMenuItem = "�����";
	pos(((83-strlen(fourthMenuItem))/2), 14);
	cout<<fourthMenuItem;
}
