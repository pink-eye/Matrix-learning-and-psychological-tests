#pragma once

using namespace std;

// FUNC TO MULTIPLICATE THE MATRIXS
void MatrixMultiplication()
{
	system("color 09");
	system("cls");
	
	// HEADER
	const char* const title = "����������� ���� ������";
	pos(((83-strlen(title))/2), 1);
	cout<<title<<"\n\n";
	for(int i=0;i<83;i++)
		cout<<"*";
		
	// RULES
	cout<<"\n\t�������:  ��� ��������� ���� ������ ���������� �����������\n\n\t������������ ��������� i-�� ������ ������ ������� ��\n\n\t��������������� �������� j-�� ������� ������ �������;\n\n";
	cout<<"\t����� �������� ������ ������� ������ ���� �����\n\n\t����� ����� ������ �������.\n\n";
	for(int i=0;i<83;i++)
		cout<<"*";
	cout<<"\n\n";
	
	// BODY
	int row1, column1;
	cout<<"\n\t1-�� �������\n";
	cout<<"\t������� ���������� ����� 'i':    \t";
	cin>>row1;
	cout<<"\t������� ���������� �������� 'j': \t";
	cin>>column1;
	Matrix a(row1, column1);
	a.FillMatrix();
	int row2, column2;
	cout<<"\n\t2-�� �������\n";
	cout<<"\t������� ���������� ����� 'i':    \t";
	cin>>row2;
	cout<<"\t������� ���������� �������� 'j': \t";
	cin>>column2;
	Matrix b(row2, column2);
	b.FillMatrix();
	if(column1==row2)
	{
		Matrix c = a*b;
		cout<<"\t���������:\n\n";
		c.ShowMatrix();
		_getch();
		system("cls");
		menuMtx();
	}
	else
	{
		cout<<"\n\n\n\t�� �� �������! �������� ��� ���\n\n";
		_getch();
		MatrixMultiplication();
	}
}
