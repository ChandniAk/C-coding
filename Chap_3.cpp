// Chap_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
string name;
float i, j, sum_i_j;
int a, b;
float divd;
int main()
{
	cin >> name;
	cout << name << endl;
	i = 1.235f;
	j = 2.345f;
	cout << setiosflags(ios::fixed)
		<< setprecision(2);
	cout << "sum of i and j is:" << i + j << endl;
	a = 5.0;
	b = 2.0;
	divd = (float)a /(float)b;
	cout << setprecision(3);
	cout << "divid 5 by 2 is:"<<divd<<endl;
	return 0;
}

