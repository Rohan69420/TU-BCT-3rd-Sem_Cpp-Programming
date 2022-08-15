// Improvements to make,
// >Make a binary file
// >Reinterpret cast into character pointer even when reading

#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

// simpler method
struct tdata
{
    int accountNo, totalBalance;
    string lastName, firstName;
    // int whereTo;
} t;

class transaction
{
private:
    int whereTo, pos;

    fstream file; // opening file don't initialize here

public:
    // static int DataCounter=0;
    transaction()
    {

        file.open("q5output.bin", std::ios::binary | std::ios::app | std::ios::in);
        pos = 1;
    }
    void addData()
    {
        cout << "Enter data to add:\nAccount no, first name, last name, total balance" << endl;
        cin >> t.accountNo;
        cin >> t.firstName;
        cin >> t.lastName;
        cin >> t.totalBalance;
        file.write(reinterpret_cast<char *>(&t), sizeof(struct tdata));
        //  DataCounter++;
    }
    void deleteData()
    {
        cout << "Which row to delete:";
        cin >> whereTo;
        file.seekg(0, std::ios::beg);
        pos = 0; // reset
        fstream temp;
        temp.open("temp.bin", std::ios::binary | std::ios::app | std::ios::in);
        while (file.tellg() != 0)
        {
            if (pos == whereTo)
            {
                continue; // delete
            }
            else
            {
                file.read(reinterpret_cast<char *>(&t), sizeof(struct tdata));
                temp.write(reinterpret_cast<char *>(&t), sizeof(struct tdata));
            }
            pos++;
        }
        temp.close();
        file.close();
        remove("q5output.bin");
        rename("temp.bin", "q5output.bin");
        file.open("q5output.bin", std::ios::in | std::ios::out); // reopen
    }
    void displayAllData()
    {
        file.seekg(0, std::ios::beg);
        pos = 0; // reset
        while (file.tellg() != EOF)
        {
            file.read(reinterpret_cast<char *>(&t), sizeof(struct tdata));
            cout << t.accountNo << " " << t.firstName << " " << t.lastName << " " << t.totalBalance << endl;
            pos++;
        }
    }
};

int main()
{
    transaction tr;
    char ch;
    while (ch != 'x')
    {
        cout << "Enter 1 to add data, 2 to delete data, 3 to update data,4 to display data and x to quit:" << endl;
        cin >> ch;
        switch (ch)
        {
        case '1':
            tr.addData();
            break;
        case '2':
            tr.deleteData();
            break;
        case '3':

            break;
        case '4':
            tr.displayAllData();
            break;
        }
    }
    return 0;
}
