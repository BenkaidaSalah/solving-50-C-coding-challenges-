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

int main()
{
    // Seed random generator (only once)
    srand((unsigned)time(NULL));

    int arr[3][3];

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "\nThe following is a 3x3 random matrix:\n\n";

    PrintMatrix(arr, 3, 3);

    return 0;
}
