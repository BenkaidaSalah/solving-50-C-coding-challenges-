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
    // Check Diagonal elements are 1 and rest elemtents are 0 .
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (i == j && Matrix[i][j] != 1)
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
    
    int Matrix1[3][3] = { {1,0,0},{0,1,0},{0,0,1} };


    cout << "\nMatrix1:\n";
    PrintMatrix(Matrix1, 3, 3);
    if (IsIdentityMarix(Matrix1, 3, 3))
        cout << "\nYES: Matrix is identity.";
    else
        cout << "\nNo: Matrix is NOT identity.";
    system("pause>0");
}