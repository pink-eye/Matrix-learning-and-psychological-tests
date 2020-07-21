#pragma once

using namespace std;


// FUNC TO FIND THE SUBTRACTION OF BOTH MATRIXS
void MatrixSubtraction()
{
	system("color 08");
	system("cls");
	
	// HEADER
	const char* const title = "РАЗНОСТЬ ДВУХ МАТРИЦ";
	pos(((83-strlen(title))/2), 1);
	cout<<title<<"\n\n";
	for(int i=0;i<83;i++)
		cout<<"*";
		
	// RULES
	cout<<"\n\tПРАВИЛО:  Для нахождения разности двух матриц необходимо вычесть каждый\n\n\tсоответсвующий элемент одной матрицы из элемента второй матрицы;\n\n";
	cout<<"\tРазмер матриц должен быть идентичен.\n\n";
	for(int i=0;i<83;i++)
		cout<<"*";
	cout<<"\n\n";
	
	// BODY
	int row1, column1, row2, column2;
	cout<<"\n\t1-ая матрица\n";
	cout<<"\tВведите количество строк 'i':    \t";
	cin>>row1;
	cout<<"\tВведите количество столбцов 'j': \t";
	cin>>column1;
	Matrix a(row1, column1);
	a.FillMatrix();
	cout<<"\n\t2-ая матрица\n";
	cout<<"\tВведите количество строк 'i':    \t";
	cin>>row2;
	cout<<"\tВведите количество столбцов 'j': \t";
	cin>>column2;
	Matrix b(row2, column2);
	b.FillMatrix();
	if(row1 == row2 && column1 == column2)
	{
		Matrix c = a - b;
		cout<<"\tРезультат:\n\n";
		c.ShowMatrix();
		_getch();
		system("cls");
		menuMtx();
	}
	else
	{
		cout<<"\n\n\n\tНе по правилу! Попробуй ещё раз\n\n";
		_getch();
		MatrixAddiction();
	}
	
	// END
	_getch();
	system("cls");
	menuMtx();
}
