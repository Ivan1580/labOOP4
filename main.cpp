#include <iostream>
#include "child.h"
#include "tiles.h"
#include "complex.h"
#include "vector.h"



using namespace std;

int main() {

	Child c1;
	Child c2("Ivan", 18);
	Child c3("Ivan", "Tsuprikov", 18);
	Child c4 = c3;
	c1.get_Child();
	cout << endl;
	c2.get_Child();
	cout << endl;
	c3.get_Child();
	cout << endl;
	c4.get_Child();
	cout << endl;

	Tiles t1;
	Tiles t2("Kafellll",2000);
	Tiles t3("kori4", 50, 100, 3000);
	Tiles t4 = t3;
	t1.get_Data();
	cout << endl;
	t2.get_Data();
	cout << endl;
	t3.get_Data();
	cout << endl;
	t4.get_Data();
	cout << endl;


	Complex co1;
	Complex co2(30);
	Complex co3(40,-20);
	Complex co4 = co3;
	co1.get_Complex();
	cout << endl;
	co2.get_Complex();
	cout << endl;
	co3.get_Complex();
	cout << endl;
	co4.get_Complex();


	
	Vector v1;
	Vector v2(20);
	Vector v3(30, -30);
	Vector v4 = v3;
	v1.get_Vector();
	cout << endl;
	v2.get_Vector();
	cout << endl;
	v3.get_Vector();
	cout << endl;
	v4.get_Vector();
	cout << endl;
	
	system("pause");


	return 0;

}