#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void FillMatrixWithOrderedNumbers(int arr[3][3], short Rows, short Cols)
{
    short Counter = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Counter++;
            arr[i][j] =Counter;
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

int main()
{
    srand((unsigned)time(NULL));

    int Matrix1[3][3];
    int Matrixmiddlerows[3], MatrixmiddleCols[3];
    short Rows = 3, Cols = 3;

    FillMatrixWithOrderedNumbers(Matrix1, Rows, Cols);
    cout << "\nMatrix 1:\n\n";
    PrintMatrix(Matrix1, Rows, Cols);
	return 0;
}