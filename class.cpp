#include "child.h"
#include "tiles.h"
#include "complex.h"
#include "vector.h"
#include <math.h>
Child::Child() // пустой
{
	name = "Nothing";
	surname = "Nothing";
	age = 0;

}
Child::Child(string name1, string surname1, int age1) // параметр
{
	name = name1;
	surname = surname1;
	age = age1;
}
Child::Child(const Child& source) // копирования
{
	name = source.name;
	surname = source.surname;
	age = source.age;
}

Child::Child(string n, int a) : name(n), age(a) //инициализации
{
	surname = "Nothing";
}
void Child::get_Child() 
{
	
	cout << "Name: " << name<< endl;
	cout << "Surname: " << surname << endl;
	cout << "Age: " << age << endl;
};


Tiles::Tiles()
{
	brand = "Nothing";
	size_h = 0;
	size_w = 0;
	price = 0;
}
Tiles::Tiles(string brand1, int size_h1, int size_w1, int price1)
{
	brand = brand1;
	size_h = size_h1;
	size_w = size_w1;
	price = price1;
	
}
Tiles::Tiles(const Tiles& source)
{
	brand= source.brand;
	size_h = source.size_h;
	size_w = source.size_w;
	price = source.price;
}
Tiles::Tiles(string b, int p): brand(b), price(p)
{
	size_h = 0;
	size_w = 0;
}

void Tiles::get_Data() 
{
	cout << "Brand: " << brand << endl
		<< "Height: " << size_h << endl
		<< "Width: " << size_w << endl
		<< "Price: " << price << endl << endl;
}


Complex::Complex() 
{
	Re = 0;
	Im = 0;
}
Complex::Complex(double Re1, double Im1)
{
	Re = Re1;
	Im = Im1;
}
Complex::Complex(const Complex& source)
{
	Re = source.Re;
	Im = source.Im;
}
Complex::Complex(double Re_a): Re(Re_a)
{
	Im = 0;
}
void Complex::get_Complex() 
{
	cout << "Re: " << Re << endl
		<< "Im: " << Im << endl
		<< "Module: " << sqrt(Re * Re + Im * Im) << endl << endl;

}

Vector::Vector()
{
	x = 3;
	y = 4;
}
Vector::Vector(double x1, double y1)
{
	x = x1;
	y = y1;
}
Vector::Vector(const Vector& source)
{
	x = source.x;
	y = source.y;
}
Vector::Vector(double x1) : x(x1)
{
	y = 0;
}
void Vector::get_Vector() 
{
	cout <<"("<< x <<","<< y <<")";
}




