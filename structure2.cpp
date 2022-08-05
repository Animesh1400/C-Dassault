// structure2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//struct Book {
//    float price;
//    char author[20];
//    char title[30];
//};
//
//void accept(Book* bptr) {
//    cout << "Enter price author and title" << endl;
//    for (int i = 0; i < 3; ++i) {
//        cin >> bptr[i].price >> (*(bptr + i)).author >> (bptr + i)->title;
//    }
//}
//
//void show(Book* bptr) {
//    cout << "Entered Information is: " << endl;
//    cout << bptr->author << " " << bptr->author << " " << bptr->title << " " << endl;
//}

typedef struct Address {
    //char city[20];
    char* city;//runtime attribute//dynamic attribute
    char state[20];
}Addr;

int main()
{
    Addr myaddress;
    myaddress.city = new char[80];
    cout << "Enter city and state " << endl;
    cin >> myaddress.city >> myaddress.state;
    cout << myaddress.city << " " << myaddress.state;
    delete[] myaddress.city;
    
    
    
    /*
    Addr* ptr = new Addr[2];
    for(int i = 0; i < 2; i++) {
        cout << "Enter city and state " << endl;
        cin >> ptr[i].city >> ptr[i].state;
    }
    cout << "Entered information is: " << endl;
    for (int i = 0; i < 2; i++) {
        cout << ptr[i].city << " " << ptr[i].state << " " << endl;
    }
    */

    //Book book_arr[3] = {
    //    {1000,"tim","head first design patterns"},
    //    {2000,"Bruce Eckel","thining in c++"},
    //    {2500,"scott myers","effecive c++"}
    //};//array of struct variables

    //for (int i = 0; i < 3; ++i) {
    //    cout << book_arr[i].price <<" "<< book_arr[i].author << " " << book_arr[i].title << endl;
    //}
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
