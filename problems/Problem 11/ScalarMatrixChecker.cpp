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

bool IsIdentityMarix(int Matrix[3][3], short Rows, short Cols)
{
    // Check Diagonal elements are the same element and rest elemtents are 0 .
	int FirstDiagonalElement = Matrix[0][0];
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (i == j && Matrix[i][j] != Matrix[i+1][j+1])
            {
                return false;
            }

            else if (i!= j && Matrix[i][j] != 0)
            {
                return false;
            }
        }

    }
    return true;
}

int main()
{
    
    int Matrix1[3][3] = { {9,0,0},{0,9,0},{0,0,9} };


    cout << "\nMatrix1:\n";
    PrintMatrix(Matrix1, 3, 3);
    if (IsIdentityMarix(Matrix1, 3, 3))
        cout << "\nYES: Matrix is Scalar Matrix.";
    else
        cout << "\nNo: Matrix is NOT Scalar Matrix.";
    system("pause>0");
}