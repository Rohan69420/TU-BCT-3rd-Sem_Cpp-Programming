#include <iostream>

using namespace std;

class carpark
{
private:
    char ch;
    bool askAgain;
    int count;
    struct car
    {
        int carId, charge_hour;
        float parkedTime;
    } s[10];

public:
    carpark()
    {
        count = 0;
        askAgain = true;
    }

    void setData()
    {
        while (askAgain)
        {
            cout << "Enter the car ID, change per hour and parked time: " << endl;
            cin >> s[count].carId;
            cin >> s[count].charge_hour;
            cin >> s[count].parkedTime;
            cout << "Do you want to enter data again?" << endl;
            cin >> ch;
            if (ch == 'N' || ch == 'n')
            {
                askAgain = false;
            }
            count++;
        }
    }
    void showData()
    {
        for (int i=0;i<count;i++){
        cout << "Rate: Rs " << s[i].charge_hour << " per hour" << endl;
        cout << "Charge: Rs " << s[i].charge_hour * s[i].parkedTime << endl;
        cout << "Car ID: " << s[i].carId << endl;
        }
    }
    void setNshow()
    {
        setData();
        showData();
    }
};
int main()
{
    carpark car;
    car.setNshow();
}