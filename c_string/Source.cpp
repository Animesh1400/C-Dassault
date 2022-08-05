#include<iostream>
#include"Cstring.h"
#pragma warning (disable:4996)
		using namespace std;

	Cstring::Cstring()
	{
		m_len = 0;
		m_pbuff = new char;
		*m_pbuff = '\0';
	}
	Cstring::Cstring(const char* str)
	{
		m_len = strlen(str);
		m_pbuff = new char[m_len + 1];
		strcpy(m_pbuff, str);
	}
	Cstring::Cstring(char ch, int l)
	{
		m_len = l;
		m_pbuff = new char[m_len + 1];
		for (int i = 0; i < m_len; i++)
			*(m_pbuff + i) = ch;
		m_pbuff[l] = '\0';
	}
	//copy contructor
	Cstring::Cstring(const Cstring & ss)
	{
		cout << "Copy const called" << endl;
		m_len = ss.m_len;
		m_pbuff = new char[m_len + 1];
		strcpy(m_pbuff, ss.m_pbuff);//perform depp copy
	}
	void Cstring::display_string()
	{
		cout << m_len << " " << m_pbuff << endl;
	}
	Cstring::~Cstring()
	{
		if (m_pbuff)
			delete[]m_pbuff;
		m_pbuff = nullptr;
		cout << "Destructor called" << endl;
	}

	Cstring& Cstring::operator=(const Cstring& ss) {
		cout << "= operator called" << endl;
		if (&ss == this) {
			return *this;//if the object is same return the same invoking object
		}
		else {
			delete[]m_pbuff;
			m_len = ss.m_len;
			m_pbuff = new char[m_len + 1];
			strcpy(m_pbuff, ss.m_pbuff);//perform depp copy
			return *this;//cascading
		}
	}

	char Cstring::operator[](int index) {
		if (index >= 0 && index < m_len) {
			return *(this->m_pbuff + index);
		}
	}

	Cstring Cstring::operator+(const Cstring& ss) {
		Cstring temp;
		delete[] temp.m_pbuff;
		temp.m_len = this->m_len + ss.m_len;
		temp.m_pbuff = new char[temp.m_len + 1];
		strcpy(temp.m_pbuff,m_pbuff);
		strcat(temp.m_pbuff, ss.m_pbuff);
		return temp;
	}
	//s2.operator(s3)
	Cstring& Cstring::operator+=(const Cstring& ss) {
		char* temp = new char[strlen( m_pbuff)+1];
		strcpy(temp, m_pbuff);
 		m_len = strlen(temp) + strlen(ss.m_pbuff);
		delete[] m_pbuff;
		m_pbuff = new char[m_len + 1];
		strcpy(m_pbuff, temp);
		strcat(m_pbuff,ss.m_pbuff);
		return *this;
	}



