// assignment123.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

using namespace std;

float power(float base, float index, float result) {
    
    for (int i = 0; i < index; i++) {
        result *= base;
    }
    
    return result;
}

int* max(int x, int y) {
    int maxi;
    x > y ? maxi = x : maxi = y;
    int* maximum;
    maximum = &maxi;
    return maximum;
}

int factorial(int* num) {
    int fact = 1;
    for (int i = *num; i > 0; i--) {
        fact *= i;
    }
    return fact;
}

void intersection(float x1, float x2,float y1, float y2, float r1, float r2) {
    double distance;
    distance =power(power((y2-y1),2,1)+ power((x2 - x1), 2, 1),0.5,1);
    if (distance > (r2 + r1)) {
        cout << "The cicles do not meet" << endl;
    }
    else {
        cout << "The cicles do meet" << endl;
    }
}

int main()
{
    

    /*float x1,x2,y1,y2,r1,r2;
    cout << "Enter for C1" << endl;
    cin >> x1 >> y1 >> r1;
    cout << "Enter for C2" << endl;
    cin >> x2>> y2 >> r2;
    intersection(x1, x2, y1, y2, r1, r2);*/

    /*int num;
    cout << "Enter the number:" << endl;
    cin >> num;
    int* ptr;
    ptr = &num;
    cout << "The factorial of " << *ptr << " is " << factorial(ptr) <<"."<< endl;*/
    /*int x, y;
    cin >> x >> y;
    cout << *max(x, y);
    int base, index, a;
    cout << "enter base and index of " << endl;
    cin >> base >> index;
    a = 1;
    cout << **power(base, index, &a);*/
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
