// C++ Program demonstrate if the cast
// fails and new_type is a pointer type
// it returns a null pointer of that type
#include <iostream>
using namespace std;

// Base class declaration
class Base {
    public:
	virtual void print()
	{
		cout << "Base" << endl;
	}
};

// Derived1 class declaration
class Derived1 : public Base {
    public:
	void print()
	{
		cout << "Derived1" << endl;
	}
};

// Derived2 class declaration
class Derived2 : public Base {
    public:
	void print()
	{
		cout << "Derived2" << endl;
	}
};

// Driver Code
int main()
{
	Derived1 d1;
	Base* bp = dynamic_cast<Base*>(&d1);

    bp->print();
	// Dynamic Casting
	Derived2* dp2 = dynamic_cast<Derived2*>(bp);
	// if (dp2 == nullptr)
	// 	cout << "null" << endl;
    std::cout<<typeid(*bp).name();
	// return 0;
}
