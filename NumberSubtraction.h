#pragma once

using namespace std;

// FUNC TO SUBTRACT NUMBER AND MATRIX			
void NumberSubtraction()
{
	system("color 0B");
	system("cls");
	
	// HEADER
	const char* const title = "РАЗНОСТЬ МАТРИЦЫ И ЧИСЛА";
	pos(((83-strlen(title))/2), 1);
	cout<<title<<"\n\n";
	for(int i=0;i<83;i++)
		cout<<"*";
	
	// RULES
	cout<<"\n\tПРАВИЛО:  Для нахождения разности матрицы и чилсла необходимо\n\n\tвычесть каждый элемент матрицы на данное число.\n\n";
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
	cout<<"\tВведите число для вычитания:\t";
	cin>>number;
	cout<<"\n\n\n";
	Matrix b;
	b = a - number;
	cout<<"\tРезультат:\n\n";
	b.ShowMatrix();
	
	// END
	_getch();
	system("cls");
	menuMtx();
}
