
#pragma once
#ifndef LABA_3_CLASSES_CO
#define LABA_3_CLASSES_CO
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Complex {
private:
	double Re;
	double Im;
public:
	Complex();
	Complex(double Re1, double Im1);
	Complex(const Complex& source);
	Complex(double Re_a);
	~Complex() {}
	void get_Complex();
};
#endif;
