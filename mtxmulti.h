#pragma once

using namespace std;

// FUNC TO MULTIPLICATE THE MATRIXS
void MatrixMultiplication()
{
	system("color 09");
	system("cls");
	
	// HEADER
	const char* const title = "Произвдение двух матриц";
	pos(((83-strlen(title))/2), 1);
	cout<<title<<"\n\n";
	for(int i=0;i<83;i++)
		cout<<"*";
		
	// RULES
	cout<<"\n\tПРАВИЛО:  Для умножения двух матриц необходимо суммировать\n\n\tпроизвеление элементов i-ой строки первой матрицы на\n\n\tсоответствующие элементы j-го столбца второй матрицы;\n\n";
	cout<<"\tЧисло столбцов первый матрицы должно быть равно\n\n\tчислу строк второй матрицы.\n\n";
	for(int i=0;i<83;i++)
		cout<<"*";
	cout<<"\n\n";
	
	// BODY
	int row1, column1;
	cout<<"\n\t1-ая матрица\n";
	cout<<"\tВведите количество строк 'i':    \t";
	cin>>row1;
	cout<<"\tВведите количество столбцов 'j': \t";
	cin>>column1;
	Matrix a(row1, column1);
	a.FillMatrix();
	int row2, column2;
	cout<<"\n\t2-ая матрица\n";
	cout<<"\tВведите количество строк 'i':    \t";
	cin>>row2;
	cout<<"\tВведите количество столбцов 'j': \t";
	cin>>column2;
	Matrix b(row2, column2);
	b.FillMatrix();
	if(column1==row2)
	{
		Matrix c = a*b;
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
		MatrixMultiplication();
	}
}
