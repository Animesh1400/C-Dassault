#include <iostream>
#include<crtdbg.h>
#include"cstring.h"
#pragma warning (disable:4996)

using namespace std;
int main()
{
	{
		Cstring s1;
		//s1.display_string();ll
		Cstring s2("dassault systemes ");
		//s2.display_string();
		//cout << s2[0] << endl;
		Cstring s3("vinsys");
		//s1 = s2 + s3;
		s2 += s3;//s1.operator(s3)
		s2.display_string();
		//s1.display_string();
		//s1 = s3 = s2;//s1.operator=(s2.operator=(s3))
		//s3.display_string();
		//s2.display_string();
		//s1.display_string();
		
		/*Cstring s4(s2);
		s4.display_string();*/
	}
	cout << "Memeory leaks: " << _CrtDumpMemoryLeaks() << endl;
}
