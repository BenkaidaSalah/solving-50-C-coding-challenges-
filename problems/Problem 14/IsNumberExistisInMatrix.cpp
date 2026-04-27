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
bool IsNumberExsitsInMatrix(int Matrix[3][3], short Rows, short Cols,short Number)
{
	
	for(int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] == Number)
            {
                return true;
            }
        }
	}
    return false;
}
int main()
{
    
    int Matrix1[3][3] = { {0,0,12},{0,0,1},{0,0,9} };
    cout << "\nMatrix1:\n";
    PrintMatrix(Matrix1, 3, 3);
	short Number;
    cout << "Please Enter the Number To Look for In Matrix  .\n";
	cin >> Number;
    if (IsNumberExsitsInMatrix(Matrix1, 3, 3,Number))
    {
        cout << "Yes, It is There .\n";
    }
    else
    {
        cout << "No, It Is Not There .\n";
    }
    system("pause>0");
}