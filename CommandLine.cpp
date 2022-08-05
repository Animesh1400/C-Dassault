#include <iostream>
#pragma warning (disable:4996) 
using namespace std;

int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		cout << "Please enter two arguments";
	}

	//cout<<"First Name is\n"<<argv[1]<<endl;

//	cout << "Press 1 for upper case and 2 for lower case "<<endl;


	if (strcmp(argv[2], "upper") == 0)
	{
		cout << strupr(argv[1]);

	}
	else if (strcmp(argv[2],"lower")==0)
	{
		cout << strlwr(argv[1]);

	}

	return 0;

}