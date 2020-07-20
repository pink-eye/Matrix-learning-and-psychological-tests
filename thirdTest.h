#pragma once

using namespace std;


// THIRD TEST
void thirdTest()
{
	system("color 0D");	
	setlocale(0,"");
	system("cls");
	pos(0, 1);
	for(int i=0;i<83;i++)
		cout<<"*";
	const char* const title = "А ВЫ ТЕРПИМЫЙ ЧЕЛОВЕК\0";
	pos(((83-strlen(title))/2), 3);
	cout<<title;
	pos(0, 5);
	for(int i=0;i<83;i++)
		cout<<"*";
	int answer[16], sum=0;
	const char* const path = "thirdTest.txt";
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
		for(int i=1;i<=16;i++)
		{
			getline(fin, question);
			cout<<"\n\n"<<question<<endl;
			cout<<"\tОтвет:\t";
			cin>>answer[i];
			if((i == 5 or i == 8 or i == 10 or i == 11 or i==12 or i == 13) && answer[i] == 1)
				sum++;
			if((i != 5 or i != 8 or i != 10 or i != 11 or i!=12 or i != 13) && answer[i] == 0)
				sum++;
			if((answer[i] > 1) || (answer[i] < 0))
			{
				cout<<"\n\n\tВы ввели неверную цифру в ответе! Начните заново...";
				_getch();
				thirdTest();
			}
		}
	}
	cout<<"\n\n\n\tРезульат:";
	if(sum <= 5)
	{
		string result;
		const char* const lowL = "lowLevel3.txt";
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
	if(sum >= 6 && sum <=11)
	{
		cout<<"\n";
		string result;
		const char* const middleL = "middleLevel3.txt";
		ifstream finMiddleL;
		finMiddleL.open(middleL);
		while(!finMiddleL.eof())
		{
			getline(finMiddleL, result);
			cout<<"\n\t"<<result;
		}
		finMiddleL.close();
	}
	if( sum >= 12)
	{
		cout<<"\n";
		string result;
		const char* const highL = "highLevel3.txt";
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
