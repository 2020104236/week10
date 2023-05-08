#pragma once
#include <iostream>
using namespace std;
class oop {
public:
	oop() : g1(20), g2(20), g3(20), g4(20) {}
	oop(int a, int b, int c, int d) {
		g1 = a; g2 = b; g3 = c; g4 = d;
	}
	int g1, g2, g3, g4;
	int total();
	oop operator+(oop&);
};