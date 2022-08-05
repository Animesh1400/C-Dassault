// string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string.h>
using namespace std;

char* copy(char* d, const char* s) {
    char* t = d;
    while (*s != '\0') {
        *d = *s;
        s++;
        d++;
    }
    *d = '\0';
    return t;
}

size_t length(const char* s) {
    int len=0;
    while (*s != '\0') {
        len += 1;
        s++;
    }
    return len;
}

char* concatenate(char* d, const char* s) {
    char* t = d + 1;
    while (*s != '\0') {
        *t = *s;
        s++;
        t++;
    }
    *t = '\0';
    return d;
}

char* upper(char* s) {
    while (*s != '\0') {
        if (*s >= 97 && *s <= 122) {
            *s -= 32;
        }
        else {
            s++;
        }
    }
    return s;
    
}

int main()
{
    char arr[20] = "Dassault";
    char brr[20];
    char crr[20] = " systems";
    
    
    //cout << length(arr) << endl;
    //cout << copy(brr, arr) << endl;;
    //cout << brr << endl;
    //cout << concatenate(arr, crr) << endl;
    upper(arr);
    cout << arr;
    
}
