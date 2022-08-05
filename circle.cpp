#include<iostream>
#include"Header.h"
using namespace std;
void circle() {
	int r;
	cout << "Enter radius of cicle" << endl;
	cin >> r;
	cout << "     Area of Circle is: " << 3.142 * r * r << endl;
	cout << "Perimeter of Circle is: " << 2 * 3.142 * r << endl;
}

void square() {
	int a;
	cout << "Enter side of square:" << endl;
	cin >> a;
	cout << "     Area of square is: " << a * a << endl;
	cout << "Perimeter of square is: " << 4 * a << endl;
}

void rectangle() {
	int b,l;
	cout << "Enter breadth and length of rectangle:" << endl;
	cin >> b >> l;
	cout << "     Area of rectangle is: " << l * b << endl;
	cout << "Perimeter of rectangle is: " << 2 * (l + b) << endl;
}

void add_mul(int* x, int* y, int* s, int* p) {
	*s = *x + *y;
	*p = *x * *y;
}