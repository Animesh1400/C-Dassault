//Created : 25/07/2022
//Modified by AWI8
#include<iostream>
#include"Header.h"

using namespace std;
//The above fuctions checks if the number entered is positive or not
bool check(int num) {
	return ((num >= 0) ? true : false);
}

//the belove function checks whether the given no. is 
void prime(int num) {
	int i = 2;
	if (check(num)) {
		while (i < num) {
			if (num % i == 0) {
				printf("Not prime");
				break;
			}
			else {
				printf("Prime");
				break;
			}
			i++;
		}
	}
	else {
		cout << "Enter a number greater than 0" << endl;
	}
}
//The below function is used to display the fibonacci series according to no. of counts the user has input
void fibonacci(int count){
	int first = 0;
	
	int second = 1;
	int third;
	if (count == 1) {
		cout << first << " ";
	}
	else if (count == 2) {
		cout << second << " " ;
	}
	else {
		cout << first << " ";
		cout << second << " ";
		for (int i = 1; i < count - 1; i++) {
			third = second + first;
			cout << third << " ";
			first = second;
			second = third;
		}
	}
}
//the below function is used to reverse the user input integer of any no. of digits and to display it.
int reverse(int n) {
	int temp = 0;
	while (n > 0) {
		temp = temp * 10 + n % 10;
		n /= 10;
	}
	return temp;
}

int raise(int x, int y) {
	int powerto=1;
	while (y > 0) {
		powerto *= x;
		y -= 1;
	}
	return powerto;
}

void changecase(char c) {
	if ((c>=65 && c<=90)) {
		c += 32;
		cout << c;
	}
	else {
		c -= 32;
		cout << c;
	}
}
