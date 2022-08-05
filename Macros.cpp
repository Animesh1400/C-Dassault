// Macros.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Header.h"

//#define PI 3.142
//#define MAX(x,y) (x>y?(x):(y))
//#define SQUARE(var1) (var1*var1)
//#define SOLUTION(A, B,N) if (A == B) {cout << -1 << endl;}\
//						else {\
//							int num; \
//							A > B ? num = N / A : num = N / B; \
//							for (int i = num; i > 0; i++) { \
//									if ((A * (num + 1)) % B != 0) { cout << A * (num + 1) << endl; break; }\
//							}\
//							}
using namespace std;

//void evenddd(int num) {
//	num % 2 == 0 ? cout << "Even" : cout << "Odd";
//}

void charline(char ch, int i);

int main()
{
	/*const float pi = 3.142f;
	cout << pi << endl;
	cout << (pi)++ << endl;
	int var1 = 10, var2 = 20;
	cout << max(var1,var2) << endl;*/

	/*int x = 3;
	cout << SQUARE(x) << endl;

	evenddd(x);*/

	/*int T;
	cin >> T;
	while (T > 0) {
		int A, B, N;
		cin >> A >> B >> N;
		SOLUTION(A, B, N);
		T -= 1;
	}*/

	/*while (true) {
		cout << endl;
		int choice;
		cout << "Enter 1 : Circle ; 2 : Square; 3 : Rectanle" << endl;
		cin >> choice;
	
		switch (choice) {
		case 1:
			circle();
			break;
		case 2:
			square();
			break;
		case 3:
			rectangle();
			break;
		default:
			cout << "Enter valid choice " << endl;
		}
	}*/

	/*int var1, var2, sum, pro;
	cin >> var1 >> var2;
	add_mul(&var1, &var2, &sum, &pro);
	cout << "    Sum is: " << sum << endl;
	cout << "Product is: " << pro << endl;*/

	char ch = "A";
	int i = 50;
	charline(ch, i);


	return 0;
}

void charline(char c, int l) {
	for (int i = 0; i < l; ++i) {
		cout << c;
	}
	cout << endl;
}
