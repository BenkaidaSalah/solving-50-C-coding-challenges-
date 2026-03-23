#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

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

// Sum one column
int ColSum(int arr[3][3], short Rows, short ColNumber)
{
    int Sum = 0;

    for (short i = 0; i < Rows; i++)
    {
        Sum += arr[i][ColNumber];
    }

    return Sum;
}

// Store all column sums in array
void SumMatrixColsInArray(int arr[3][3], int arrSum[3], short Rows, short Cols)
{
    for (short i = 0; i < Cols; i++)
    {
        arrSum[i] = ColSum(arr, Rows, i);
    }
}

// Print column sums
void PrintColsSumArray(int arr[3], short length)
{
    cout << "\nThe following are the sum of each column:\n\n";

    for (short i = 0; i < length; i++)
    {
        cout << "Column " << i + 1 << " Sum = " << arr[i] << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];
    int arrSum[3]; 

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "\nMatrix:\n\n";
    PrintMatrix(arr, 3, 3);

    SumMatrixColsInArray(arr, arrSum, 3, 3);

    PrintColsSumArray(arrSum, 3);

    return 0;
}
