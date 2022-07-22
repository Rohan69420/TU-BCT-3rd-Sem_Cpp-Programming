#include <iostream>
using namespace std;

class students {
private:
	int _student_no;
public:
	
	void * operator new(size_t size) {
		void * p = malloc(size);
		cout << "New overloaded"<<endl;
		return p;
		
	}
	void operator delete(void *p) {
		cout << "Overloaded delete"<<endl;
		free(p);
		
	} 

};
int main() {
	students* sptr = new students;
	delete sptr;
	
	return 0;
}