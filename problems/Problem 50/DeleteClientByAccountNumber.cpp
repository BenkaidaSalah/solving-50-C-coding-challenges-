#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance = 0.0;
    bool MarkForDelete = false;
};

vector<string> SplitString(string S1, string Delim)
{
    vector<string> vString;
    int pos = 0;
    string sWord;
    while ((pos = S1.find(Delim)) != string::npos)
    {
        sWord = S1.substr(0, pos);
        if (sWord != "")
            vString.push_back(sWord);
        S1.erase(0, pos + Delim.length());
    }
    if (S1 != "")
        vString.push_back(S1);
    return vString;
}

sClient ConvertLinetoRecord(string Line, string Seperator = "#//#")
{
    sClient Client;
    vector<string> vClientData = SplitString(Line, Seperator);
    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]);
    return Client;
}

string ConvertRecordToLine(sClient Client, string Seperator = "#//#")
{
    string stClientRecord = "";
    stClientRecord += Client.AccountNumber + Seperator;
    stClientRecord += Client.PinCode + Seperator;
    stClientRecord += Client.Name + Seperator;
    stClientRecord += Client.Phone + Seperator;
    stClientRecord += to_string(Client.AccountBalance);
    return stClientRecord;
}

string ReadAccountNumber()
{
    string AccountNumber;
    cout << "Please enter account number? ";
    getline(cin, AccountNumber);
    return AccountNumber;
}

vector<sClient> LoadClientDataFromFile(string FileName)
{
    vector<sClient> Clients;
    fstream MyFile;
    MyFile.open(FileName, ios::in);
    if (MyFile.is_open())
    {
        string Line;
        while (getline(MyFile, Line))
            Clients.push_back(ConvertLinetoRecord(Line));
        MyFile.close();
    }
    return Clients;
}

void PrintClientRecord(sClient Client)
{
    cout << "\n\nThe following Are The Client Details:\n";
    cout << "\nAccount Number : " << Client.AccountNumber;
    cout << "\nPin Code       : " << Client.PinCode;
    cout << "\nName           : " << Client.Name;
    cout << "\nPhone          : " << Client.Phone;
    cout << "\nAccount Balance: " << Client.AccountBalance;
}

bool FindAccountByAccountNumber(vector<sClient> vClients, string AccountNumber, sClient& Client)
{
    for (sClient C : vClients)
    {
        if (C.AccountNumber == AccountNumber)
        {
            Client = C;
            return true;
        }
    }
    return false;
}

bool MarkClientForDeleteByAccountNumber(vector<sClient>& vClients, string AccountNumber)
{
    for (sClient& C : vClients)
    {
        if (C.AccountNumber == AccountNumber)
        {
            C.MarkForDelete = true;
            return true;
        }
    }
    return false;
}

void SaveVectorToFile(string FileName, vector<sClient> vClients)
{
    fstream MyFile;
    string DataLine;
    MyFile.open(FileName, ios::out);
    if (MyFile.is_open())
    {
        for (sClient& C : vClients)
        {
            if (!C.MarkForDelete)
            {
                DataLine = ConvertRecordToLine(C);
                MyFile << DataLine << endl;
            }
        }
        MyFile.close();
    }
}

bool DeleteClientByAccountNumber(vector<sClient>& vClients, string AccountNumber, string filepath)
{
    sClient Client;
    char DeleteClient = 'Y';
    if (FindAccountByAccountNumber(vClients, AccountNumber, Client))
    {
        PrintClientRecord(Client);
        cout << "\nAre you sure you want to delete this client? (Y/N): ";
        cin >> DeleteClient;
        if (tolower(DeleteClient) == 'y')
        {
            MarkClientForDeleteByAccountNumber(vClients, AccountNumber);
            SaveVectorToFile(filepath, vClients);
            cout << "\nClient (" << AccountNumber << ") deleted successfully.\n";
            return true;
        }
        return false;
    }
    else
    {
        cout << "Client (" << AccountNumber << ") Not Found.\n";
        return false;
    }
}

int main()
{
    string filePath = "C:\\Users\\benkaida salah\\Desktop\\Cliensdata.txt";
    vector<sClient> vClients = LoadClientDataFromFile(filePath);
    string AccountNumber = ReadAccountNumber();
    DeleteClientByAccountNumber(vClients, AccountNumber, filePath);
    return 0;
}