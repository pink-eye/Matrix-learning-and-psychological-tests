#pragma once

using namespace std;


// FIRST TEST
void firstTest()
{
	system("color 07");	
	system("cls");
	
	// HEADER
	pos(0, 1);
	for(int i=0;i<83;i++)
		cout<<"*";
	const char* const title = "УМЕЕТЕ ЛИ ВЫ КОНТРОЛИРОВАТЬ СЕБЯ\0";
	pos(((83-strlen(title))/2), 3);
	cout<<title;
	pos(0, 5);
	for(int i=0;i<83;i++)
		cout<<"*";
	
	// BODY
	int answer, sum=0;
	const char* const path = "firstTest.txt";
	ifstream fin;
	string question;
	fin.open(path);
	if(!fin.is_open())
	{
		cout<<"\n\tФайл не удалось открыть...";
	}
	else
	{
		cout<<"\n\tДля ответа на вопрос введите '1', если вы согласны, иначе - '0'\n";
		while(!fin.eof())
		{
			getline(fin, question);
			cout<<"\n\n"<<question<<endl;
			cout<<"\tОтвет:\t";
			cin>>answer;
			if(answer == 1)
				sum++;
			if((answer > 1) || (answer < 0))
			{
				cout<<"\n\n\tВы ввели неверную цифру в ответе! Начните заново...";
				_getch();
				firstTest();
			}
		}
	}
	cout<<"\n\n\n\tРезульат:";
	if(sum <= 3)
	{
		string result;
		const char* const lowL = "lowLevel.txt";
		ifstream finLowL;
		finLowL.open(lowL);
		cout<<"\n";
		while(!finLowL.eof())
		{
			getline(finLowL, result);
			cout<<"\n\t"<<result;
		}
		finLowL.close();
	}
	if(sum >= 4 && sum <=6)
	{
		cout<<"\n";
		string result;
		const char* const middleL = "middleLevel.txt";
		ifstream finMiddleL;
		finMiddleL.open(middleL);
		while(!finMiddleL.eof())
		{
			getline(finMiddleL, result);
			cout<<"\n\t"<<result;
		}
		finMiddleL.close();
	}
	if(sum >= 7 && sum <=10)
	{
		cout<<"\n";
		string result;
		const char* const highL = "highLevel.txt";
		ifstream finHighL;
		finHighL.open(highL);
		while(!finHighL.eof())
		{
			getline(finHighL, result);
			cout<<"\n\t"<<result;
		}
		finHighL.close();
	}
	fin.close();
	_getch();
	system("cls");
	menuTests();
	
}
