#include <iostream>
#include "Fraction.h"
using namespace std;
int main() {
	Fraction F1(10, 12);
	Fraction F2(30, 6);
	F1.add(F2);
	F1.Print();
	F2.Print();
	F1.Multipliy(F2);
	F1.Print();
	F2.Print();
	return 0;
}