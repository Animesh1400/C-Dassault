// 2dstring.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#pragma warning(disable:4996)
#include <iostream>
#include<string.h>

using namespace std;

void sort_names(char names[][20]) {
	char temp[20];
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (strcmp(names[i], names[j]) > 0) {
				strcpy(temp, names[i]);
				strcpy(names[i], names[j]);
				strcpy(names[j], temp);
			}
		}
	}
}


int main()
{
	char names[5][20] = { "dhoni","bumrah","sharma","virat","maxwell" };
	//cout << *names << endl;
	sort_names(names);
	for (int i = 0; i < 5; i++)
		cout << names[i] << endl;
		1	
}
