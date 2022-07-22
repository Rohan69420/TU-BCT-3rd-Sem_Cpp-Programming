#include <iostream>
using namespace std;
class Drinks {
public:
	void operator ()(int n) {
		switch (n) {
		case 1:
			cout << "boba" << endl;
			break;
		case 2:
			cout << "lemonade" << endl;
			break;
		}
	}
};
	int main() {
		Drinks d;
		d(1);
		return 0;
	}