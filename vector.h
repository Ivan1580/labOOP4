
#pragma once
#ifndef LABA_3_CLASSES_V
#define LABA_3_CLASSES_V
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Vector {
private:
	double x;
	double y;
public:
	Vector();
	Vector(double x, double y);
	Vector(const Vector& source);
	Vector(double x1);
	~Vector() {}
	void get_Vector();
};
#endif;