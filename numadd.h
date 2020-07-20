#pragma once

using namespace std;

// FUNC TO PLUS NUMBER WITH THE MATRIX			
void NumberAddiction()
{
	system("color 0B");
	system("cls");
	
	// HEADER
	const char* const title = "Сложение матрицы на число";
	pos(((83-strlen(title))/2), 1);
	cout<<title<<"\n\n";
	for(int i=0;i<83;i++)
		cout<<"*";
	
	// RULES
	cout<<"\n\tПРАВИЛО:  Для сложения матрицы на чилсло необходимо\n\n\tсложить каждый элемент матрицы на данное число.\n\n";
	for(int i=0;i<83;i++)
		cout<<"*";
	cout<<"\n\n";
	
	// BODY
	int row, column, number;
	cout<<"\n\tВведите количество строк 'i':    \t";
	cin>>row;
	cout<<"\tВведите количество столбцов 'j': \t";
	cin>>column;
	Matrix a(row, column);
	a.FillMatrix();
	cout<<"\tВведите число для сложения:\t";
	cin>>number;
	cout<<"\n\n\n";
	Matrix b;
	b = number + a;
	cout<<"\tРезультат:\n\n";
	b.ShowMatrix();
	
	// END
	_getch();
	system("cls");
	menuMtx();
}
