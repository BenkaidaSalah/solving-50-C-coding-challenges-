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


bool IsNumberInMatrix(int Matrix[3][3], int Number,short Rows, short Cols)
{
    for (int i = 0;i < Rows; i++)
    {
        for(int j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] == Number)
            {
                return true;
            }
		}
    }
    return false;
}

int UserMarixCountNumber(int Matrix[3][3], short Rows, short Cols, int Number)
{
    // Check Diagonal elements are the same element and rest elemtents are 0 .
    short NumberCount = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] == Number)
            {
                NumberCount += 1;
            }
        }

    }
    return NumberCount;
}
void PrintIntersectedNumbers(int Matrix[3][3], int Matrix2[3][3], short Rows, short Cols)
{
	short Number=0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Number = Matrix[i][j];
            if (IsNumberInMatrix(Matrix2, Number, Rows, Cols))
            {
                
                cout << setw(3) << Number << " ";
            }
        }

    }
}

int main()
{

    int Matrix1[3][3] = { {2,77,12},{67,3,9},{2,77,9} };
	int Matrix2[3][3] = { {2,77,12},{3,4,9},{2,77,9} };
    cout << "\nMatrix1:\n";
    PrintMatrix(Matrix1, 3, 3);
    cout << "\nMatrix2:\n";
    PrintMatrix(Matrix2, 3, 3);
    cout<< endl;
    cout <<"Intersected Numbers Are : " <<endl;

    PrintIntersectedNumbers(Matrix1, Matrix2, 3, 3);
    system("pause>0");
}