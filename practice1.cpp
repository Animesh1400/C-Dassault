
#include <iostream>
#include"Header.h"
using namespace std;



int main()
{
    //int n;
    //cout << "Enter a number: " << endl;
    //cin >> n;
    //prime(n);
    //fibonacci(n);
    //cout<<reverse(n);
    /*int var1 ; 
    int var2 ;
    cin >> var1 >> var2;
    cout<<raise(var1,var2);*/
    char ch;
    cin >> ch;
    if ((ch>=65 && ch<=90) || (ch>=97 && ch<= 122)) {
        changecase(ch); 
    }
    else {
        cout << "enter valid charachter" << endl;
    }
 
}

