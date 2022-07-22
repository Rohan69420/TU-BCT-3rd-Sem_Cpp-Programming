#include <iostream>
using namespace std;
class Logic {
private:
	int _data;
public:
	Logic(int x):_data(x){}
	void operator &&(Logic L) {
		if (_data == L._data && L._data % 2 == 0) {
			cout << "and" << endl;
		}
	}
	void operator ||(Logic L) {
		if (_data == L._data || L._data % 2 == 0) {
			cout << "or " << endl;
		}
	}
};
int main() {
	Logic L1(4), L2(6);
	L1 && L2;
	L1 || L2;
	return 0;
}