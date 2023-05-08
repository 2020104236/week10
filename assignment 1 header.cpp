#include "class+.h"
int oop::total(){ return g1 + g2 + g3 + g4; }
oop oop::operator+(oop& q) {
	oop r;
	r.g1 = g1 + q.g1;
	r.g2 = g2 + q.g2;
	r.g3 = g3 + q.g3;
	r.g4 = g4 + q.g4;
	return r;
}