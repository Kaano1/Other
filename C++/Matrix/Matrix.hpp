#include <iostream>
#include <string>
using namespace std;

class Matrix
{
	private:
		int	row;
		int	col;
		int	**matrix;
	public:
		Matrix(int r = 5, int c = 5);
		~Matrix();
		Matrix(const Matrix& oth);
		int		get_row_number() const
		{
			return (row);
		}
		int		get_col_number() const
		{
			return (col);
		}
		void	set_value(int r, int c, int value);
		void	randomSet();
		void	identityMatrixSet();
		void	display();
		void	addMatrix(Matrix& oth);
};

Matrix::Matrix(int r, int c)
{
	if (r > 0 && c > 0)
	{
		row = r;
		col = c;
	}
	else
	{
		row = 5;
		col = 5;
	}
	matrix = new int* [row];
	for (int i = 0; i < row; i++)
		matrix[i] = new int[col];
	cout << "Matrix created" << endl;
	cout << "Row: " << row << " Col: " << col << endl;
}

Matrix::Matrix(const Matrix& oth)
{
	row = oth.row;
	col = oth.col;
	matrix = new int *[row];
	for (int i = 0; i < row; i++)
		matrix[i] = new int[col];
	for (int i = 0; i < row; i++)
		for(int j = 0; j < col; j++)
			matrix[i][j] = oth.matrix[i][j];
	cout << "Matrix copied to target" << endl;
}

Matrix::~Matrix()
{
	for (int i = 0; i < row; i++)
		delete[] matrix[i];
	delete[] matrix;
	cout << "Matrix destroyed" << endl;
}

void	Matrix::set_value(int r, int c, int value)
{
	matrix[r][c] = value;
}

void	Matrix::display()
{
	cout << "Matrix" << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			cout << matrix[i][j] << " ";
		cout << endl;
	}
	cout << endl;
}

void	Matrix::randomSet()
{
	srand(time(NULL));
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			matrix[i][j] = rand() % 10;
}

void	Matrix::identityMatrixSet()
{
	for (int i = 0; i < row; i++)
		for(int j = 0; j < col; j++)
			if (i == j)
				matrix[i][j] = 1;
			else
				matrix[i][j] = 0;
}

void	Matrix::addMatrix(Matrix& oth)
{
	if (row != oth.row || col != oth.col)
	{
		cout << "These matrix should be equal" << endl;
		return ;
	}
	Matrix result(row, col);
	for (int i = 0; i < row; i++)
		for(int j = 0; j < col; j++)
			result.matrix[i][j] = matrix[i][j] + oth.matrix[i][j];
	result.display();
}
