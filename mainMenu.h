#pragma once

using namespace std;

// MENU
void mainMenu()
{
	system("color 02");
	
	// HEADER
	
	for(int i=0;i<83;i++)  
		cout<<"*";
		
	const char* const start = "ÊÓÐÑÎÂÎÉ ÏÐÎÅÊÒ\0";
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
	
	const char* const first = "Ìàòðèöû";
	pos(((83-strlen(first))/2), 8);
	cout<<first;
	
	const char* const second = "Ïñèõîëîãè÷åñêèå òåñòû";
	pos(((83-strlen(second))/2), 10);
	cout<<second;
	
	const char* const third = "Îá àâòîðå";
	pos(((83-strlen(third))/2), 12);
	cout<<third;
	
	const char* const fourth = "Âûõîä";
	pos(((83-strlen(fourth))/2), 14);
	cout<<fourth;
}
