#include <iostream>
using namespace std;
class items {
private:
	int _ascii;

public:
	void operator[](char x){
		_ascii = int(x);
		cout << "Ascii value of given char: " << int(x) << endl;
	}
};
int main() {
	items i;
	i['x'];
	return 0;
}