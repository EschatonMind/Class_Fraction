#pragma once
#include <iostream>
using namespace std;
class Fraction
{
private:
	int Numerator;
	int Denominator;

public:
	 
	Fraction(int Numerator, int Denominator) {
		this->Numerator = Numerator;
		this->Denominator = Denominator;
	}
	
	void add(Fraction const &F) {
		int lcm = Denominator * F.Denominator;
		int x = lcm / Denominator;
		int y = lcm / F.Denominator;
		int num = x * Numerator + y * F.Numerator;
		Numerator = num;
		Denominator = lcm;
		Simplify();
	}

	void Multipliy(Fraction const &F) {

		Numerator = F.Numerator * Numerator;
		Denominator = F.Denominator * Denominator;
		Simplify();

	}

	void Simplify() {
		int gcd = 1;
		int j = min(this->Numerator, this->Denominator);
		for (int i = 1; i < j; i++) {
		
			if (Numerator % i == 0 && Denominator % i == 0) {
				gcd = i;
				
			}
		}
		
		Numerator = Numerator / gcd;
		Denominator = Denominator / gcd;
		
	}
	void Print() {
		cout << " Numerator: " << Numerator << " Denominator: " << Denominator << " Numerator / Denominator:  " << Numerator / Denominator << endl;
	}
};

