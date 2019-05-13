
#pragma once
#ifndef LABA_3_CLASSES_T
#define LABA_3_CLASSES_T
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Tiles {
public:
	string brand;
	double size_h;
	double size_w;
	double price;
	Tiles();
	Tiles(string brand1, int size_h1, int size_w1, int price1);
	Tiles(const Tiles& source);
	Tiles(string b, int p);
	~Tiles() {}
	void get_Data();
};
#endif;
