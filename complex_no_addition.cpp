// complex_no_addition.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class complex {
public:
	int real, img;
};

int main()
{
	complex a, b, c;
	cout << "input real of a and b:" << endl;
	cin >> a.real>> b.real;
	cout << "input img of a and b:" << endl;
	cin >> a.img >> b.img;
	cout << "sum of two img numbers:" << endl;
	c.real = a.real + b.real;
	c.img = a.img + b.img;

	cout << c.real <<"+i"<< c.img;
    return 0;
}

