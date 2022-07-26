#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

// simpler method
struct tdata
{
    int accountNo, totaBalance;
    string lastName, firstName;
    // int whereTo;
} t;

class transaction
{
private:
    int n, whereTo;
    fstream file("q5random.txt", ios::in | ios::out); // opening file

public:
    transaction()
    {
        // cout<<"Enter the number of records you want to enter:";
        // cin>>n;
        // t = new struct tdata[n];
        n = 0;
    }
    void addData()
    {
        file.seekg(0, ios::end);
        cout << "Enter data to add:\nAccount no, first name, last name, total balance" << endl;
        cin >> t.accountNo;
        cin >> t.firstName;
        cin >> t.lastName;
        cin >> t.totaBalance;
        file << t.accountNo << t.firstName << t.lastName << t.totaBalance << "\n";
        file.seekg(0, ios::beg); // reset head to beginning
        n++;
    }
    void deleteData()
    {
        cout << "Which row to delete:";
        cin >> whereTo;
        ifstream temp("temp.txt", ios::in);
        for (int i = 0, i < n; i++)
        {
            file >> t.accountNo >> t.firstName >> t.lastName >> t.totaBalance;
            if (i != whereTo - 1)
            {
                temp << t.accountNo << t.firstName << t.lastName << t.totaBalance;
            }
            file.seekg(sizeof(struct tdata), ios::cur);
        }
        // delete and rename
        std::string fileName = "q5random.txt";
        std::wstring wFileName(fileName.begin(), fileName.end());
        auto res = DeleteFile(wFileName.c_str());

        rename("temp.txt", "q5random.txt");
    }
    void readAfterSeek(int x)
    {
        // ifstream ifile("q5random.txt");
        file.seekg(sizeof())
    }
};
int main()
{
    transaction tr;
    tr.addData();
    tr.deleteData();
    return 0;
}
