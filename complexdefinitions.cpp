#include<iostream>
#include"Complex1.h"

using namespace std;



Complex::Complex() {
	m_real = 0;
	m_imag = 0;
}

Complex::Complex(int real, int imag) {
	this->m_real = real;
	this->m_imag = imag;
}

void Complex::accept() {
	cout << "Enter real and imaginary number" << endl;
	cin >> m_real >> m_imag;
}


void Complex::show()const {
	cout << this->m_real << " " << this->m_imag << endl;
}

Complex::~Complex()
{
	cout << "Destructor called" << endl;
}

