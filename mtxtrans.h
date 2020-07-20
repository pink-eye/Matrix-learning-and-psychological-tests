#pragma once

using namespace std;


// FUNC TO TRANSPOSE THE MATRIX
void MatrixTranspose()
{
	system("color 0A");
	system("cls");
	
	// HEADER
	const char* const title = "���������������� �������";
	pos(((83-strlen(title))/2), 1);
	cout<<title<<"\n\n";
	for(int i=0;i<83;i++)
		cout<<"*";
		
	// RULES
	cout<<"\n\t�������:  ��� ��������� ����������������� ������� �� ��������\n\n\t���������� ������ ������� 'i' �������� � ���� ������� 'j' � ��� �� �������.\n\n";
	for(int i=0;i<83;i++)
		cout<<"*";
	cout<<"\n\n";
	
	// BODY
	int row, column;
	cout<<"\n\t������� ���������� ����� 'i':    \t";
	cin>>row;
	cout<<"\t������� ���������� �������� 'j': \t";
	cin>>column;
	Matrix a(row, column);
	a.FillMatrix();
	a.ShowMatrix();
	cout<<"\n\t����������������...\n\n\n";
	Matrix b;
	b = TransposeMatrix(a);
	b.ShowMatrix();
	
	// END
	_getch();
	system("cls");
	menuMtx();
}
