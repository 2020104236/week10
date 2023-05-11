#include "assignment 2 header.h"
void main() {
	city cities[4];
	cities[0] = city((char*)"Seoul.txt");
	cities[1] = city((char*)"London.txt");
	cities[2] = city((char*)"Paris.txt");
	cities[3] = city((char*)"Newyork.txt");
	ofstream yy("total.txt");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 12; j++) {
			yy << j + 1 << "  " << cities[i].fc[j].c << "   " << cities[i].fc[j].f << endl;
		}
	}
	yy.close();
}
