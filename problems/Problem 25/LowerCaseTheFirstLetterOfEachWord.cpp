#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}
string LowercaseFirstLetterOfEachWord(string S1)
{
	bool isFirstLetter = true;
	cout << "\nString After Conversion : \n";

	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ' && isFirstLetter)
		{
			S1[i] = tolower(S1[i]);
		}
		isFirstLetter = (S1[i] == ' ' ? true : false);
	}
	return S1;
}
int main()
{
	
	cout << LowercaseFirstLetterOfEachWord(ReadString());
	return 0;
}