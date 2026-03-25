#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

// Generate random number between From and To
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

// Fill matrix with random numbers
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 100);
        }
    }
}

// Print matrix
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(4) << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void PrintMatrix2(int arr2[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(4) << arr2[i][j] << " ";
        }
        cout << endl;
    }
}
void MultiplyMatrix(int Matrix1[3][3], int Matrix2[3][3], int MatrixResults[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
			MatrixResults[i][j] = Matrix1[i][j] * Matrix2[i][j];
            
        }
        cout << endl;
    }
}
void PrintMatrix(int MatrixResults[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %0*d ", 2, MatrixResults[i][j]);
        }
    }
}



int main()
{
    // Seed random generator (only once)
    srand((unsigned)time(NULL));

    int Matrix1[3][3], Matrix2[3][3], MatrixResults[3][3];
	int Rows = 3, Cols = 3;
    
    FillMatrixWithRandomNumbers(Matrix1, Rows, Cols);
    cout << "\n matrix1 :\n\n";
    PrintMatrix(Matrix1, Rows, Cols);
    FillMatrixWithRandomNumbers(Matrix2, Rows, Cols);
    cout << "\n matrix2 :\n\n";
    PrintMatrix2(Matrix2, Rows, Cols);
    MultiplyMatrix(Matrix1, Matrix2, MatrixResults, Rows, Cols);
    PrintMatrix(MatrixResults, Rows,Cols);
    return 0;
}