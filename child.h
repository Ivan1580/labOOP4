#pragma once
#ifndef LABA_3_CLASSES_CH
#define LABA_3_CLASSES_CH
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Child {
private:
	string name;
	string surname;
	int age;
public:
	Child();
	Child(string name1, string surname1, int age1);
	Child(const Child& source);
	Child(string n, int a);
	~Child() {}
	void get_Child();
};
#endif;