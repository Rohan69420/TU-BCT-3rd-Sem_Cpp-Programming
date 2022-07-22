#include <iostream>
using namespace std;
class BW {
public:
	void operator &(BW b) {
		cout << "You've overloaded &" << endl;
	}
	void operator |(BW b) {
		cout << "You'vee overloaded |" << endl;
	}
};
int main() {
	BW b1, b2;
	b1& b2;
	b1 | b2;
	return 0;
}