sClient ConvertLinetoRecord(string Line, string Seperator =
"#//#")
{
sClient Client;
vector<string> vClientData;
vClientData = SplitString(Line, Seperator);
Client.AccountNumber = vClientData[0];
Client.PinCode = vClientData[1];
Client.Name = vClientData[2];
Client.Phone = vClientData[3];
Client.AccountBalance = stod(vClientData[4]);//cast string to
double
return Client;
}
void PrintClientRecord(sClient Client)
{
cout << "\n\nThe following is the extracted client record:\n";
cout << "\nAccout Number: " << Client.AccountNumber;
cout << "\nPin Code : " << Client.PinCode;
cout << "\nName : " << Client.Name;
cout << "\nPhone : " << Client.Phone;
cout << "\nAccount Balance: " << Client.AccountBalance;
}
int main()
{
string stLine = "A150#//#1234#//#Mohammed Abu-
Hadhoud#//#079999#//#5270.000000";
cout << "\nLine Record is:\n";
cout << stLine;
sClient Client = ConvertLinetoRecord(stLine);
PrintClientRecord(Client);
system("pause>0");
return 0;
}