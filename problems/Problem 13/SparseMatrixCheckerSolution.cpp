#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;



// Print matrix
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int UserMarixCountNumber(int Matrix[3][3], short Rows, short Cols, int Number)
{
    // Check Diagonal elements are the same element and rest elemtents are 0 .
    short NumberCount = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix[i][j]== Number)
            {
                NumberCount +=1;
            }
        }

    }
    return NumberCount;
}
bool IsaSparceMatrix(int Matrix[3][3], short Rows, short Cols)
{
	
	short MatrixSize = (Rows * Cols) / 2;
    return (UserMarixCountNumber(Matrix, Rows, Cols, 0) >= MatrixSize);
}


int main()
{
    
    int Matrix1[3][3] = { {0,0,12},{0,0,1},{0,0,9} };


    cout << "\nMatrix1:\n";
    PrintMatrix(Matrix1, 3, 3);
    if (IsaSparceMatrix(Matrix1, 3, 3))
    {
        cout << "Yes, This is a Sparse Matrix.\n";
    }
    else
    {
        cout << "No, This is not a Sparse Matrix.\n";
    }
    system("pause>0");
}