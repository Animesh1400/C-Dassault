// references.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void swap(int& x, int& y) {
    x = x + y;
    y = x - y;
    x = x - y;
    cout << x << " " << y << endl;
}
//collect and return by reference
int& max(int& x, int& y) {
    return ((x > y) ? (x) : (y));
}

int main()
{
    int x = 100;
    int& ref = x;
    cout<<sizeof(ref)<<endl;
    cout << ref << " " << x << endl;
    ref = 200;
    cout << ref << " " << x << endl;

    int var1 = 10;
    int var2 = 20;
    swap(var1, var2);//pass by reference

    cout<<max(var1, var2);//pass by reference
}
