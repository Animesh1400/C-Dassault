#include<iostream>
#include"Complex1.h"
#include<string.h>

using namespace std;
int Complex::count = 0; //Define static data member in atleaset one .cpp file

int counter = 0; // global variable

int main() {
	Complex c1;

	c1.show();

	Complex c3;
	c3.accept();
	c3.show();

	Complex* cptr = new Complex; //object created at runtime // default contructor
	cptr->accept();
	cptr->show();
	delete cptr;
	cptr = nullptr;
	
	
	int num;
	cout << "How many complex class objects you want?" << endl;
	cin >> num;
	cptr = new Complex[num];
	for (int i = 0; i < num; ++i) {
		cptr[i].accept();
	}
	
	return 0;
}
