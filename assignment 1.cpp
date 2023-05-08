#include "class+.h"
int main() {
	oop A, B, C;
	A = oop(10, 50, 3, 4);
	B = oop(0, 45, 2, 4);
	C = A + B;
	cout << C.total() << endl;
	return 123;
}