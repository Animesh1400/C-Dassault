
#pragma once

class Cstring
{
	char* m_pbuff;
	int m_len;

public: Cstring();
	  Cstring(const char*);
	  Cstring(char, int);
	  Cstring(const Cstring&);
	  void display_string();
	  Cstring& operator=(const Cstring&);
	  Cstring operator+(const Cstring&);
	  Cstring& operator+=(const Cstring&);
	  char operator[](int);
	  ~Cstring();

};

