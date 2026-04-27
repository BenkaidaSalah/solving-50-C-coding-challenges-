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

void PrintUserMarixCountNumber(int Matrix[3][3], short Rows, short Cols, int Number)
{
	cout << "Number of " << Number << " in the matrix: " << UserMarixCountNumber(Matrix, Rows, Cols, Number) << endl;
}


int UserCountNumber()
{
    int Number;
    cout << "Enter a number: ";
    cin >> Number;
    return Number;
}


int main()
{
    
    int Matrix1[3][3] = { {1,2,6},{8,9,2},{4,7,9} };


    cout << "\nMatrix1:\n";
    PrintMatrix(Matrix1, 3, 3);
	PrintUserMarixCountNumber(Matrix1, 3, 3, UserCountNumber());
    system("pause>0");
}