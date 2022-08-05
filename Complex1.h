#pragma once

class Complex {
	int m_real;
	int m_imag;
	static int count;
public:
	Complex(); //default constructor
	Complex(int, int);//parameterized constructor
	void accept();
	void show()const;
	~Complex();
};
