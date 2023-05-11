#include "assignment 2 header.h"
FC::FC(float cc) { c = cc; f = getF(); }
float FC::getF() { return c * 9 / 5 + 32; }
float FC::getC() { return (f - 32) * 5 / 9; }
city::city(char* fn) {
	xx.open(fn);
	for (int i = 0; i < 12; i++) {
		xx >> c;
		fc[i] = FC(c);
	}
	xx.close();
}
