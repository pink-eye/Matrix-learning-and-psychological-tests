#pragma once

using namespace std;


// FUNC TO TRANSPOSE THE MATRIX
void MatrixTranspose()
{
	system("color 0A");
	system("cls");
	
	// HEADER
	const char* const title = "Транспонирование матрицы";
	pos(((83-strlen(title))/2), 1);
	cout<<title<<"\n\n";
	for(int i=0;i<83;i++)
		cout<<"*";
		
	// RULES
	cout<<"\n\tПРАВИЛО:  Для получения транспонированной матрицы из исходной\n\n\tнеобходимо каждую строчку 'i' записать в виде столбца 'j' в том же порядке.\n\n";
	for(int i=0;i<83;i++)
		cout<<"*";
	cout<<"\n\n";
	
	// BODY
	int row, column;
	cout<<"\n\tВведите количество строк 'i':    \t";
	cin>>row;
	cout<<"\tВведите количество столбцов 'j': \t";
	cin>>column;
	Matrix a(row, column);
	a.FillMatrix();
	a.ShowMatrix();
	cout<<"\n\tТранспонирование...\n\n\n";
	Matrix b;
	b = TransposeMatrix(a);
	b.ShowMatrix();
	
	// END
	_getch();
	system("cls");
	menuMtx();
}
