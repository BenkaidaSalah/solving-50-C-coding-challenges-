include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

// Generate random number
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

// Fill matrix
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

void PrintMiddleRowOfMatrix(int arr[3][3],short Rows, short Cols)
{
    short MiddleRow = Rows / 2;

    for (short j = 0; j < Cols; j++)
    {
        printf("%0*d   ", 2, arr[MiddleRow][j]);
    }

}
void PrintMiddleColOfMatrix(int arr[3][3],short Rows, short Cols)
{
	short MiddleCol = Cols / 2;
    for (short i = 0; i < Rows; i++)
    {
		printf("%0*d   ", 2, arr[i][MiddleCol]);
    }
    cout << "\n";
}
int main()
{
    srand((unsigned)time(NULL));

    int Matrix1[3][3];
    int Matrixmiddlerows[3], MatrixmiddleCols[3];
    short Rows = 3, Cols = 3;

    FillMatrixWithRandomNumbers(Matrix1, Rows, Cols);
    cout << "\nMatrix 1:\n\n";
    PrintMatrix(Matrix1, Rows, Cols);
    cout << "\nMiddle Row of Matrix1 is:\n";
    PrintMiddleRowOfMatrix(Matrix1, 3, 3);
    cout << "\nMiddle Col of Matrix1 is:\n";
    PrintMiddleColOfMatrix(Matrix1, 3, 3);


	return 0;
}
