#pragma once

using namespace std;

// FUNC TO PLUS NUMBER WITH THE MATRIX			
void NumberAddiction()
{
	system("color 0B");
	system("cls");
	
	// HEADER
	const char* const title = "�������� ������� �� �����";
	pos(((83-strlen(title))/2), 1);
	cout<<title<<"\n\n";
	for(int i=0;i<83;i++)
		cout<<"*";
	
	// RULES
	cout<<"\n\t�������:  ��� �������� ������� �� ������ ����������\n\n\t������� ������ ������� ������� �� ������ �����.\n\n";
	for(int i=0;i<83;i++)
		cout<<"*";
	cout<<"\n\n";
	
	// BODY
	int row, column, number;
	cout<<"\n\t������� ���������� ����� 'i':    \t";
	cin>>row;
	cout<<"\t������� ���������� �������� 'j': \t";
	cin>>column;
	Matrix a(row, column);
	a.FillMatrix();
	cout<<"\t������� ����� ��� ��������:\t";
	cin>>number;
	cout<<"\n\n\n";
	Matrix b;
	b = number + a;
	cout<<"\t���������:\n\n";
	b.ShowMatrix();
	
	// END
	_getch();
	system("cls");
	menuMtx();
}
