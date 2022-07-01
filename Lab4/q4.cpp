#include <iostream>

class parkData
{
private:
    int num_vehicle;
    float hour, rate;

public:
    parkData(parkData &x)
    { // dis our own copy constructor
        num_vehicle = x.num_vehicle;
        hour = x.hour;
        rate = x.rate;
    }
    parkData(int nv, float hr, float rt)
    { // compiler's copy constructor
        num_vehicle = nv;
        hour = hr;
        rate = rt;
    }
    void showRate()
    {
        if (num_vehicle > 10)
        {
            std::cout << "Total charge = " << num_vehicle * rate * hour * .9 << std::endl;
        }
        else
        {
            std::cout << "Total charge = Rs. " << num_vehicle * rate * hour << std::endl;
        }
    }
};
int main()
{
    parkData d1(15,2,15);
    parkData d22(d1);
    d22.showRate();
}