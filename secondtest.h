#pragma once

using namespace std;


// SECOND TEST
void secondTest()
{	
	system("color 0C");
	system("cls");
	pos(0, 1);
	for(int i=0;i<83;i++)
		cout<<"*";
	const char* const title = "НАСКОЛЬКО ВЫ ДОБРОЖЕЛАТЕЛЬНЫ\0";
	pos(((83-strlen(title))/2), 3);
	cout<<title;
	pos(0, 5);
	for(int i=0;i<83;i++)
		cout<<"*";
	int answer[13], sum=0;
	const char* const path = "secondTest.txt";
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
		for(int i=1;i<=13;i++)
		{
			getline(fin, question);
			cout<<"\n\n"<<question<<endl;
			cout<<"\tОтвет:\t";
			cin>>answer[i];
			if((i%2!=0) && (answer[i] == 0))
				sum++;
			if((i%2==0) && (answer[i] == 1))
				sum++;
			if((i==13) && (answer[i] == 1))
				sum++;
			if((answer[i] > 1) || (answer[i] < 0))
			{
				cout<<"\n\n\tВы ввели неверную цифру в ответе! Начните заново...";
				_getch();
				secondTest();
			}
		}
	}
	cout<<"\n\n\n\tРезульат:";
	if(sum <= 4)
	{
		string result;
		const char* const lowL = "lowLevel2.txt";
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
	if(sum >= 5 && sum <=9)
	{
		cout<<"\n";
		string result;
		const char* const middleL = "middleLevel2.txt";
		ifstream finMiddleL;
		finMiddleL.open(middleL);
		while(!finMiddleL.eof())
		{
			getline(finMiddleL, result);
			cout<<"\n\t"<<result;
		}
		finMiddleL.close();
	}
	if( sum >= 10 )
	{
		cout<<"\n";
		string result;
		const char* const highL = "highLevel2.txt";
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
