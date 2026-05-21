#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void PrintFibonacciUsingLoop(short Number)
{
    int FebNumber = 0;
    int Perv2 = 0;
    int Perv1 = 1;

    cout << "1 ";

    for (int i = 2; i <= Number; i++)
    {
        FebNumber = Perv1 + Perv2;
        cout << FebNumber << "    ";
        Perv2 = Perv1;
        Perv1 = FebNumber;
    }
}
int main()
{
    PrintFibonacciUsingLoop(10);
    return 0;
}