#include <iostream>
using namespace std;
class Data {
private:
	int _firstData, _secondData;
public:
	Data(int x, int y) :_firstData(x), _secondData(y){}
	void operator=(Data* D) {
		if (_firstData == D->_firstData && _secondData == D->_secondData) {
			cout << "True" << endl;
		}
		else {
			cout << "False" << endl;
		}
	}
};
int main() {
	Data d1(2, 3), d2(2, 3);
	d2 = d2;
	return 0;
}