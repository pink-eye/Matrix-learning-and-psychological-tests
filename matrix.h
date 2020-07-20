#pragma once
using namespace std;

class Matrix{
	private:
		int rowMatrix;
		int columnMatrix;
		int** Mtx;
		void DeleteMatrix()
		{
			for(int i=0;i<rowMatrix;i++)
			{
				delete[] Mtx[i];
			}
			delete[] Mtx;		
		}
	public:	
		Matrix()
		{
			columnMatrix = 2;
			rowMatrix = 2;
			Mtx = new int*[rowMatrix];
			for(int i = 0; i < rowMatrix; i++)
				Mtx[i]=new int[columnMatrix];
			for(int i = 0; i < rowMatrix; i++)
				for(int j = 0; j < columnMatrix; j++)
					Mtx[i][j] = 0;
		};
		
		Matrix(int rowMatrix, int columnMatrix)
		{
			this->columnMatrix = columnMatrix;
			this->rowMatrix = rowMatrix;
			Mtx = new int*[rowMatrix];
			for(int i = 0; i < rowMatrix; i++)
				Mtx[i]=new int[columnMatrix];
			for(int i = 0; i < rowMatrix; i++)
				for(int j = 0; j < columnMatrix; j++)
					Mtx[i][j] = 0;
		};
		
		Matrix(const Matrix &AnotherMatrix)
		{
			this->columnMatrix = AnotherMatrix.columnMatrix;
			this->rowMatrix = AnotherMatrix.rowMatrix;
			this->Mtx = new int*[this->rowMatrix];
			for(int i = 0; i < this->rowMatrix; i++)
				Mtx[i]=new int[this->columnMatrix];
			for(int i = 0; i < this->rowMatrix; i++)
				for(int j = 0; j < this->columnMatrix; j++)
					this->Mtx[i][j] = AnotherMatrix.Mtx[i][j];
		};
		
		void SetRowMatrix(int rowMatrix)
		{
			this->rowMatrix = rowMatrix;
		}
		
		void SetColumnMatrix(int columnMatrix)
		{
			this->columnMatrix = columnMatrix;
		}
		
		int GetRowMatrix()
		{
			return rowMatrix;	
		}
				
		int GetColumnMatrix()
		{
			return columnMatrix;
		}
		
		void FillMatrix()
		{
			cout<<"\n";
			for(int i = 0; i < rowMatrix; i++)
				for(int j = 0; j < columnMatrix; j++)
				{
					cout<<"\t"<<"A["<<i+1<<"]["<<j+1<<"]:\t";
					cin>>Mtx[i][j];
				}
			cout<<"\n\n\n";
		}
		
		void ShowMatrix()
		{	
		
			for(int i = 0;i < rowMatrix; i++)
			{
				for(int j = 0 ; j < columnMatrix; j++)
				{
					cout<<"\t"<<Mtx[i][j]<<" ";
				}
				cout<<"\n\n";
			}
		}	
		
		~Matrix()
		{
			DeleteMatrix();
		};

		Matrix operator+(const Matrix& AnotherMatrix)
		{	
			Matrix NewMatrix(this->rowMatrix, AnotherMatrix.columnMatrix);
			if(this->columnMatrix == AnotherMatrix.columnMatrix && this->rowMatrix == AnotherMatrix.rowMatrix)
			{
				for(int i = 0; i < this->rowMatrix; i++)
					for(int j = 0; j < AnotherMatrix.columnMatrix; j++)
						NewMatrix.Mtx[i][j] = this->Mtx[i][j] + AnotherMatrix.Mtx[i][j];
			}
			else
				cout<<"\tMatrixes are not equal\n\n";
			return NewMatrix;
		}

		Matrix operator+(int Number)
		{	
			Matrix NewMatrix(this->rowMatrix, this->columnMatrix);	
			for(int i = 0; i < this->rowMatrix; i++)
				for(int j = 0; j < NewMatrix.columnMatrix; j++)
					NewMatrix.Mtx[i][j] = this->Mtx[i][j] + Number;
			return NewMatrix;
		}

		Matrix operator-(const Matrix& AnotherMatrix)
		{	
			Matrix NewMatrix(this->rowMatrix, AnotherMatrix.columnMatrix);
			if(this->columnMatrix == AnotherMatrix.columnMatrix && this->rowMatrix == AnotherMatrix.rowMatrix)
			{
				for(int i = 0; i < this->rowMatrix; i++)
					for(int j = 0; j < AnotherMatrix.columnMatrix; j++)
						NewMatrix.Mtx[i][j] = this->Mtx[i][j] - AnotherMatrix.Mtx[i][j];
			}
			else
				cout<<"\tMatrixes are not equal\n\n";
			return NewMatrix;
		}

		Matrix operator-(int Number)
		{	
			Matrix NewMatrix(this->rowMatrix, this->columnMatrix);	
			for(int i = 0; i < this->rowMatrix; i++)
				for(int j = 0; j < NewMatrix.columnMatrix; j++)
					NewMatrix.Mtx[i][j] = this->Mtx[i][j] - Number;
			return NewMatrix;
		}
		
		Matrix operator*(const Matrix& AnotherMatrix)
		{	
			Matrix NewMatrix(this->rowMatrix, AnotherMatrix.columnMatrix);
			if(this->columnMatrix == AnotherMatrix.rowMatrix)
			{
				for(int i = 0; i < this->rowMatrix; i++)
					for(int j = 0; j < AnotherMatrix.columnMatrix; j++)
					{
						NewMatrix.Mtx[i][j] = 0;
						for(int k = 0; k < this->columnMatrix; k++)
							NewMatrix.Mtx[i][j] += this->Mtx[i][k] * AnotherMatrix.Mtx[k][j];
					}
			}
			else
				cout<<"\tThe quantity of first matrix rows and columns in the second matrix are not equal\n\n";
			return NewMatrix;
		}
		
		Matrix operator*(int Number)
		{	
			Matrix NewMatrix(this->rowMatrix, this->columnMatrix);	
			for(int i = 0; i < this->rowMatrix; i++)
				for(int j = 0; j < NewMatrix.columnMatrix; j++)
					NewMatrix.Mtx[i][j] = this->Mtx[i][j] * Number;
			return NewMatrix;
		}
		
		void operator=(const Matrix& AnotherMatrix)
		{
			this->columnMatrix = AnotherMatrix.columnMatrix;
			this->rowMatrix = AnotherMatrix.rowMatrix;
			if(this->Mtx != nullptr)
			{
				this->DeleteMatrix();
				this->Mtx = new int*[this->rowMatrix];
				for(int i = 0; i < this->rowMatrix; i++)
					Mtx[i]=new int[this->columnMatrix];
			}
			for(int i = 0; i < this->rowMatrix; i++)
				for(int j = 0; j < this->columnMatrix; j++)
					this->Mtx[i][j] = AnotherMatrix.Mtx[i][j];
		}
		
		friend	Matrix operator+(int Number, const Matrix& AnotherMatrix);
		friend	Matrix operator-(int Number, const Matrix& AnotherMatrix);
		friend	Matrix operator*(int Number, const Matrix& AnotherMatrix);
		friend Matrix TransposeMatrix(Matrix& AnotherMatrix);
};

Matrix operator+(int Number, const Matrix& AnotherMatrix)
{	
	Matrix NewMatrix(AnotherMatrix.rowMatrix, AnotherMatrix.columnMatrix);	
	for(int i = 0; i < NewMatrix.rowMatrix; i++)
		for(int j = 0; j < NewMatrix.columnMatrix; j++)
			NewMatrix.Mtx[i][j] = Number + AnotherMatrix.Mtx[i][j];
		return NewMatrix;
}

Matrix operator-(int Number, const Matrix& AnotherMatrix)
{	
	Matrix NewMatrix(AnotherMatrix.rowMatrix, AnotherMatrix.columnMatrix);	
	for(int i = 0; i < NewMatrix.rowMatrix; i++)
		for(int j = 0; j < NewMatrix.columnMatrix; j++)
			NewMatrix.Mtx[i][j] = Number - AnotherMatrix.Mtx[i][j];
		return NewMatrix;
}

Matrix operator*(int Number, const Matrix& AnotherMatrix)
{	
	Matrix NewMatrix(AnotherMatrix.rowMatrix, AnotherMatrix.columnMatrix);	
	for(int i = 0; i < AnotherMatrix.rowMatrix; i++)
		for(int j = 0; j < NewMatrix.columnMatrix; j++)
			NewMatrix.Mtx[i][j] = AnotherMatrix.Mtx[i][j] * Number;
	return NewMatrix;
}
Matrix TransposeMatrix(Matrix& AnotherMatrix)
{
	Matrix NewMatrix(AnotherMatrix.GetColumnMatrix(), AnotherMatrix.GetRowMatrix());
	for(int i = 0; i < NewMatrix.GetRowMatrix(); i++)
		for(int j = 0; j < NewMatrix.GetColumnMatrix(); j++)
			NewMatrix.Mtx[i][j] = AnotherMatrix.Mtx[j][i];
	return NewMatrix;
}
